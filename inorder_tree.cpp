void fun(Node *root,vector<int>&v)
{
if(root==NULL)
return;
fun(root->left,v);
v.push_back(root->data);
fun(root->right,v);
}
vector<int> inOrder(Node* root)
{
// Your code here
vector<int>v;
fun(root,v);

return v;
}
