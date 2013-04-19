#ifndef BINARYTREE_H
#define BINARYTREE_H
using namespace std;
struct node{
int weightValue;
string review;
node *left;
node *right;

};
class binaryTree
{
public:
	binaryTree();
	~binaryTree();
void insert(int weightValue, string review);


node *search(int weightValue);
void destroyTree();
void printInorder();
node *releventReview();
private:
	
	void printInorder(node *leaf);
	void destroyTree(node *leaf);
	void insert(int weightValue, string review, node *leaf);
	node *releventReview(node *leaf);
	node *search(int weightValue, node *leaf);
	node *root;
};
binaryTree::binaryTree() //initialize root to NULL
{
root = NULL;
}
binaryTree::~binaryTree()//destructor
{
	destroyTree();
}


void binaryTree::destroyTree(node *leaf) //destroy all nodes of the tree
{
	if(leaf != NULL)
	{
		destroyTree(leaf->left);
		destroyTree(leaf->right);
		delete leaf;
		leaf = NULL;
	}
}
void binaryTree::destroyTree()
{
	destroyTree(root);
}
void binaryTree::insert(int weightValue, string review, node *leaf)
{
	if(weightValue < leaf->weightValue)
	{
		if(leaf->left != NULL)
		insert(weightValue, review, leaf->left);	
		else
		{
			leaf->left = new node;
			leaf->left->weightValue = weightValue;
			leaf->left->review = review;
			leaf->left->left = NULL; //left child set to NULL
			leaf->left->right = NULL; //right child set to NULL
		}
	}
	else if (weightValue >= leaf->weightValue)
	{
		if(leaf->right!=NULL)
			insert(weightValue, review, leaf->right);
		else
		{
			leaf->right=new node;
			leaf->right->weightValue=weightValue;
			leaf->right->review = review;
			leaf->right->left = NULL; //left child set to NULL
			leaf->right->right = NULL; //right child set t NULL
		}
	}
}
node *binaryTree::search(int weightValue, node *leaf)
{
	if(leaf!= NULL)
	{
		if(weightValue == leaf->weightValue)
			return leaf;
		if(weightValue < leaf->weightValue)
			return search(weightValue, leaf->left);
		else
			return search(weightValue, leaf->right);
	}
	else return NULL;
}
void binaryTree::insert(int weightValue, string review)
{
	if(root!=NULL)
		insert(weightValue, review, root);
	else
	{
		root = new node;
		root->weightValue = weightValue;
		root->review =review;
		root->left = NULL;
		root->right = NULL;
	}
}
node *binaryTree::search(int weightValue)
{
return search(weightValue, root);
}
void binaryTree::printInorder()
{
	printInorder(root);
}
void binaryTree::printInorder(node *p)
{
	if(p != NULL)
	{
		printInorder(p->left); //print left subtree
		cout << p->weightValue <<": "<< p->review<<endl;
		printInorder(p->right);
	}
}

//fix my insert functions check
//function to find right most node

//return the node
// remember template
node *binaryTree::releventReview()
{
	return releventReview(root);
}
node *binaryTree::releventReview(node *leaf)
{
	if(leaf->right!= NULL)return releventReview(leaf->right);
	else
	return leaf;
//return node recursive	
}

//copy constructor
#endif