bool pathSumRecursiveHelper(struct TreeNode* root, int target, int currentSum) {
    currentSum = currentSum + root->val;

    if (root->left == NULL && root->right == NULL && target == currentSum) return true;

    bool resLeft = false, resRight = false;

    if (root->right != NULL) resRight = pathSumRecursiveHelper(root->right, target, currentSum);
    if (root->left != NULL) resLeft = pathSumRecursiveHelper(root->left, target, currentSum);

    return resRight || resLeft;
}


// Function to check if there exists a path from root to leaf
// such that the sum of values along the path equals the given sum
bool hasPathSum(struct TreeNode* root, int sum) {
    if (root == NULL) return false;

    return pathSumRecursiveHelper(root, sum, 0);
}