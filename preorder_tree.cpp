void fun(Node *root,vector<int>&v)
{
if(root==NULL)
return;

v.push_back(root->data);
fun(root->left,v);
fun(root->right,v);
}
vector <int> preorder(Node* root)
{
  // Your code here
  vector<int> vrr;
  fun(root, vrr);
  return vrr;
  
}
