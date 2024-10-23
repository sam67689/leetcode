int getListLength(struct ListNode *head) {
    int len = 0;
    while (head != NULL) {
        head = head->next;
        len++;
    }
    return len;
}

struct ListNode* rotateRight(struct ListNode* head, int k) {
    if (head == NULL || head->next == NULL || k == 0) return head;
    
    int len = getListLength(head);
    struct ListNode *oldHead = head;
    struct ListNode *current = head;
    struct ListNode *newHead =  NULL;

    k = k % len;
    if (k == 0) return head;

    // Switch to new head
    for (int i = 1; i <= len - k; i++) {
        current = current->next;
    }
    newHead = current;

    // Go to end of first half, connect tail to old head.
    while (current->next != NULL) {
        current = current->next;
    }
    current->next = oldHead;

    // Terminate old head
    for (int i = 1; i < len - k; i++) {
        oldHead = oldHead->next;
    }
    oldHead->next =  NULL;

    return newHead;
}