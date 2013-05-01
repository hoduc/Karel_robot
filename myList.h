#include "point.h"

typedef struct node{
	Point p;
	int factor;	//compare to divide
	struct node *mid;
	struct node *left;
	struct node *right;
	node(int x, int y):mid(NULL),left(NULL),right(NULL), factor(-1){
		p.set(x,y);
	}
	void set(int x, int y){
		p.set(x,y);
	}
}NODE;

typedef class list{
private:
	NODE *root;
	int length;
	int min;
	int max;
	void createLevel(NODE*&p,int divfactor){
		if (divfactor == min || divfactor == max)
			return;
		
	}
public:
	list(int mini, int maxi):root(NULL), length(0){
		min = mini;
		max = maxi;
	}
	void divide(int df){
		if (root == NULL){
			root = new NODE(-1,-1);
			root->factor = df;
		}
		while (y < min){
			createLevel(root->left,df/2);
			createLevel(root->right,df + max-df/2);
		}
	}
	void add(int x, int y){
	}
	void del(int x, int y){}
}LIST
