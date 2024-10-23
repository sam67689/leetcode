bool isSymmetricRecursiveHelper(struct TreeNode* left, struct TreeNode* right) {
    bool resRoot = true, resLeft = true, resRight = true;
    
    if (left == NULL && right == NULL) return resRoot;

    if (left == NULL && right != NULL) resRoot = false;
    else if (left != NULL && right == NULL) resRoot = false;
    else if (left->val != right->val) resRoot = false;

    if (left != NULL && right != NULL) {
        resLeft = isSymmetricRecursiveHelper(left->left, right->right);
        resRight = isSymmetricRecursiveHelper(left->right, right->left);
    }

    return resRoot && resLeft && resRight;
}

bool isSymmetric(struct TreeNode* root) {
    if(root == NULL) return true;

    return isSymmetricRecursiveHelper(root->left, root->right);
}