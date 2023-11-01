#include <iostream>
#include <queue>

using namespace std;

struct Treenode {
    int val;
    Treenode* left;
    Treenode* right;
    Treenode(int x) {
    	
	  val =x;
	  left=NULL;
	  right=NULL;
	   
}
};

bool Maxheap(Treenode* root) {
    if (!root) {
        return true;
    }

    queue<Treenode*> q1;
    q1.push(root);
    bool Maxheap = true;

    while (!q1.empty()) {
        Treenode* current = q1.front();
        q1.pop();

        if (current->left) {
            if (current->left->val > current->val) {
                Maxheap = false;
                break;  
            }
            q1.push(current->left);
        }

        if (current->right) {
            if (current->right->val > current->val) {
                Maxheap = false;
                break;   
            }
            q1.push(current->right);
        }
    }

    return Maxheap;
}


bool bst(Treenode* root) {
    if (!root) {
        return true;
    }

    queue<Treenode*> q1;
    q1.push(root);
    bool flag= false;

    while (!q1.empty()) {
        Treenode* current = q1.front();
        q1.pop();

        if (current) {
            if (flag) {
                return false;
            }
            q1.push(current->left);
            q1.push(current->right);
        } else {
            flag = true;
        }
    }

    return true;
}

bool check_(Treenode* root) {
    return Maxheap(root) && bst(root);
}

int main() {
    Treenode* root = new Treenode(5);
    root->left = new Treenode(6);
    root->right = new Treenode(7);
    root->left->left = new Treenode(8);
    root->left->right = new Treenode(9);
    root->right->left = new Treenode(10);

    if (check_(root)) {
        cout << "check is true ." << endl;
    } else {
        cout << "check is not true ." << endl;
    }

    return 0;
}

