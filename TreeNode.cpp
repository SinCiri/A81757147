 #include "TreeNode.h"
  TreeNode::TreeNode(){

    data=0;
    left=nullptr;
    right=nullptr;
  }
 TreeNode::TreeNode(int data){

    this->data=data;
    this->left=nullptr;
    this->right=nullptr;
 

  }
  TreeNode::TreeNode(int data,TreeNode * left, TreeNode * right){

    this->data=data;
    this->left=left;
    this->right=right;
  }
 void TreeNode::setData(int data){
   this->data=data;
 }
  
  int TreeNode::getData(){
    return data;
  }
//TODO
  TreeNode * TreeNode::getLeft(){
    return left;
  }
  TreeNode * TreeNode::getRight(){
    return right;
  }
// does not create any new node. Just sets the right pointer
  void TreeNode::setRight(TreeNode *newRight){
    right=newRight;
  }
// does not create any new node. Just sets the left pointer
//TODO
  void TreeNode::setLeft(TreeNode *newLeft){
  left = newLeft;
  }
 
 bool TreeNode::isLeaf(){
   return (left==nullptr&&right==nullptr);
 }
//creates a new node with the data value and sets the rightpointer to it
 void TreeNode::addRight(int data){
   right= new TreeNode(data,nullptr,nullptr);
 }
//creates a new node with the data value and sets the left pointer to it
//TODO
  void TreeNode::addLeft(int data){
  //
  left = new TreeNode(data, nullptr, nullptr);
  }
 