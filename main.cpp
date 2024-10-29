Template
#include "TreeNode.h"
//GIVEN
void inorderTraversal(TreeNode * root);
//TODO
TreeNode * search(TreeNode * node,int data);
//GIVEN
void insert(TreeNode * node,int data);
//GIVEN
bool isNull(TreeNode * node){
   return node==nullptr;
 }

int main() {
  // create the root, gets set to null
  TreeNode * root;
  // create the roor and set the data of root to 5
  root= new TreeNode(5);
  //create two additional nodes with data values 10 and 3
  // these will go to the right and left of root respectively
  
  TreeNode * ten= new TreeNode(10);
  TreeNode * three= new TreeNode(3);
  //connect ten to the right of root (which has data 5)
  root->setRight(ten);
  //connect three  to the left of root (which has data 5)
  root->setLeft(three);
  
  // note this can also be done as
  //root.setRight(new TreeNode(10));
  //root.setLeft(new TreeNode(3);)

  // add two more nodes
  //the first has data value 7. So to keep the tree in insorted order, it should get attached as the left node of ten
  // the second has data value 4. So to keep the tree in insorted order, it should get attached as the right node of three

  ten->addLeft(7);
 
  three->addRight(4);
  std::cout<<"**************************************\n";
  std::cout<<"Printing the Inorder Traversal\n";
  inorderTraversal(root);  
std::cout<<"**************************************\n";
  std::cout<<"Searching for Node \n";
  TreeNode* result = search(root,4);
  if (result!=nullptr){
  
    std::cout<<"Found "<<result->getData()<<"\n";
    }
  else 
      std::cout<<"Not Found "<<4<<"\n";
  result = search(root,1);
  if (result!=nullptr){
  
    std::cout<<"Found "<<result->getData()<<"\n";
    }
   else 
      std::cout<<"Not Found "<<1<<"\n";
  std::cout<<"**************************************\n";
  std::cout<<"Inserting 6\n";
  insert(root,6);
std::cout<<"**************************************\n";
  std::cout<<"Printing the Inorder Traversal\n";
  inorderTraversal(root);  
  
} 


// uses recursion

void inorderTraversal(TreeNode * node){
  
   // exit case
   if (isNull(node)) return;
   if (node->isLeaf()){
      std::cout<<"Printing Leaf Node "<<node->getData()<<"\n";
      return;}
   // reached a node with no left, so print the node and travel right
    if (!isNull(node->getLeft()))
    // if there is a left path, then travel further on that
     inorderTraversal(node->getLeft());
    std::cout<<"Printing Node "<<node->getData()<<"\n";
   // save and travel the right path of the current node being processed
    inorderTraversal(node->getRight());
    
}
// uses recursion
//TODO
TreeNode * search(TreeNode * node, int data){
  // if the node is null return the null ptr
 //if this nodes data equals the search date return found
 // if not, if the left tree exists and search data less than
  //this nodes data return the result of recursive all to search with left pointer
  // if no left tree, but right tree exists and search data greater than
  //this nodes data return the result of recursive all to search with right pointer
  // if both above conditions not true return null ptr
  
  
}
//uses recursion
void insert(TreeNode * node,int data){
  if (node->getData()==data)
    return;
  else if(data<node->getData()){
          if (!isNull(node->getLeft()))
           // std::cout<<"Going Left from  "<<node->getData()<<"\n";
             return insert(node->getLeft(),data);
          else node->setLeft(new TreeNode(data));
        }
  else if (data>node->getData()){
          if (!isNull(node->getRight()))
             return insert(node->getRight(),data);
          else node->setRight(new TreeNode(data));
        }
  
}

