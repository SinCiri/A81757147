#include <iostream>
#include <memory>
#include <new>

class TreeNode{

  private: int data;
  private: TreeNode * left;
  private: TreeNode * right;
 
  public:
  TreeNode();
  TreeNode(int data);
  TreeNode(int data, TreeNode * left, TreeNode * right);
  void setData(int data);
  int getData();
  bool isLeaf();


  TreeNode * getLeft();
  TreeNode * getRight(); 
  void setRight(TreeNode *newRight);
  void setLeft(TreeNode *newLeft);
  void addRight(int data);
  void addLeft(int data);
};
  