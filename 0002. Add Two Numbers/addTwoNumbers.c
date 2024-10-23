struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2){
    if (l1 == NULL) return l2;
    if (l2 == NULL) return l1;

    struct ListNode *current = (struct ListNode *) malloc(sizeof(struct ListNode));
    current->next = NULL;

    struct ListNode *result = current;
    int carrier = 0;
    int sum, val1, val2;


    while (l1 != NULL || l2 != NULL) {
        val1 = (l1 == NULL) ? 0 : l1->val;
        val2 = (l2 == NULL) ? 0 : l2->val;

        sum = val1 + val2 + carrier;
        current->val = sum % 10;
        carrier = sum / 10;

        if(l1 != NULL) l1 = l1->next;
        if(l2 != NULL) l2 = l2->next;

        if (l1 != NULL || l2 != NULL) {
            struct ListNode *n = (struct ListNode *) malloc(sizeof(struct ListNode));        
            current->next = n;
            current = current->next;  
            current->next = NULL;          
        }
    }

    if (carrier > 0) {
        struct ListNode *n = (struct ListNode *) malloc(sizeof(struct ListNode)); 
        current->next = n;
        current = current->next;
        current->val = 1;
        current->next = NULL;
    } 

    return result;
}