/*
Given a binary tree, find its maximum depth.

The maximum depth is the number of nodes along the longest path from the root node down to the farthest leaf node.

*/

/**

 * Definition for a binary tree node.

 * struct TreeNode {

 *     int val;

 *     TreeNode *left;

 *     TreeNode *right;

 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}

 * };

 */
#include <algorithm>

using namespace std;

struct TreeNode 
{
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}

};

class Solution 
{
	public:

    	int maxDepth(TreeNode* root) 
	{
		if(root == NULL)
			return 0;
		else if(root->left == NULL && root->right == NULL)
			return 1;
		else if(root->left == NULL && root->right != NULL)
			return maxDepth(root->right)+1;
		else if(root->left != NULL && root->right == NULL)
			return maxDepth(root->left)+1;		
		else
			return max(maxDepth(root->left)+1, maxDepth(root->right)+1);	
    	}

};

/*
递归完成
*/
