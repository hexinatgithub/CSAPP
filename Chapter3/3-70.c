//CSAPP 3.70
typedef struct ELE *tree_ptr;

struct ELE
{
	tree_ptr left;
	tree_ptr right;
	long val;
};

/*
B:找到二叉树里面最小的元素
*/
long traverse(tree_ptr tp){
	int result = 0x7fffffffffffffff;
	if (tp != NULL)
	{
		int val = tp->val;
		int min_val_left = traverse(tp->left);
		int min_val_right = traverse(tp->right);
		result = min_val_left <= min_val_right ? min_val_left : min_val_right;
		result = result > val ? val : result;
	}
	return result;
}