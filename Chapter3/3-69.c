//CSAPP 3.69
typedef struct ELE *tree_ptr;

struct ELE
{
	tree_ptr left;
	tree_ptr right;
	long val;
};

/*
B:找到二叉树里面最左边的元素
*/
long trace(tree_ptr tp){
	int result = 0;
	if (tp != NULL)
	{
		result = tp->val;
		tree_ptr left_pt = tp->left;
		if (tp->left)
			result = trace(left_pt);
	}
	return result;
}