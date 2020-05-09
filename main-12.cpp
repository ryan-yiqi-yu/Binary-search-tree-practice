
#include <iostream>
using namespace std;

class bst{
private:
    struct node{
        int data;
        node *leftchild=NULL;
        node *rightchild=NULL;
    };
    node *root = NULL, *traverse = NULL;
    void inorder(node *n){
        if (n->leftchild!=NULL){
            inorder(n->leftchild);
        }
        cout<<n->data<<" ";
        if (n->rightchild!=NULL){
            inorder(n->rightchild);
            }

    
        }
    
public:
    void add(int NewValue){
        node *NewNode = new node;
        NewNode->data=NewValue;
        if (root==NULL){
            root = NewNode;
        }
        else {
            traverse = root;
            while(true){
                if (NewValue<=traverse->data && traverse->leftchild != NULL){
                    traverse = traverse->leftchild;
                }
                else if (NewValue>traverse->data && traverse->rightchild != NULL){
                    traverse = traverse->rightchild;
                }
                else if (NewValue>traverse->data && traverse->rightchild == NULL){
                    traverse->rightchild = NewNode;
                    break;
                }
                else if (NewValue<=traverse->data && traverse->leftchild == NULL){
                    traverse->leftchild = NewNode;
                    break;
                }
            }
            
        }
    }
    void print(){
        inorder(root);
    }
    
    
};

int main(){
    bst test;

    test.add(67);
    test.add(678);
    test.add(59);
    test.add(90);
    test.add(12);
    test.add(28);
    test.add(59);
    test.add(91);
    test.add(1);
    test.add(45);
    test.print();
    cout<<endl<<endl;
}
//FINAL EDIT .1
