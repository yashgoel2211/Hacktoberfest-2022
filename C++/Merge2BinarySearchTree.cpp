class Solution
{
    public:
    void inorder(Node *root, vector<int> &ans)
    {
        if(root==NULL)
            return;
        inorder(root->left, ans);
        ans.push_back(root->data);
        inorder(root->right, ans);
    }
    Node *minValueNode(Node *nod)
    {
        Node *current = nod;
        while(current->left !=NULL)
            current = current->left;
        return current;
    }
    
    //Function to return a list of integers denoting the node 
    //values of both the BST in a sorted order.
    vector<int> merge(Node *root1,Node *root2)
    {
        //using two stacks s1 and s2 to store nodes of both BST separately.
        stack<Node *> s1;
        stack<Node *> s2;
        
        //using two pointer nodes to point current nodes of both BST.
        Node *c1 = root1;
        Node *c2 = root2;
    
        vector<int> ans;
        
        //if first BST is empty then output is inorder traversal of second BST.
        if(root1==NULL)
        {
            inorder(root2, ans);
            return ans;
        }
        //if second BST is empty then output is inorder traversal of first BST.
        if(root2==NULL)
        {
            inorder(root1, ans);
            return ans;
        }
        
        //we run a loop while there are nodes not yet stored in output list.  
        while(c1!=NULL or !s1.empty() or c2!=NULL or !s2.empty())
        {
            //following steps follow iterative Inorder Traversal.
            
            //if any of the two pointers is not NULL.
            if(c1!=NULL or c2!=NULL)
            {
                //reaching the leftmost node of both BST and pushing ancestors   
                //of leftmost nodes to stack s1 and s2 respectively.
                if(c1!=NULL){
                    s1.push(c1);
                    c1 = c1->left;
                }
                if(c2!=NULL){
                    s2.push(c2);
                    c2 = c2->left;
                }
            }
            //else both pointers point to NULL.
            else 
            {
                //if either of the stacks is empty, then one tree is exhausted 
                //so we store the other tree in list and return it.
                if(s1.empty())
                {
                    while(!s2.empty())
                    {
                        c2  = s2.top();
                        s2.pop();
                        c2->left= NULL;
                        inorder(c2, ans);
                    }
                    return ans;
                }
                if(s2.empty())
                {
                    while(!s1.empty())
                    {
                        c1  = s1.top();
                        s1.pop();
                        c1->left = NULL;
                        inorder(c1, ans);
                    }
                    return ans;
                }
                //we pop one element from both stacks and compare them. 
                c1 = s1.top();
                c2  = s2.top();
                s1.pop();
                s2.pop();
                
                //if element of first tree is smaller then we store it in the
                //list and move the pointer to its right subtree. 
                //we push the popped element from second stack back into stack.
                if(c1->data < c2->data)
                {
                    ans.push_back(c1->data);
                    c1 = c1->right;
                    s2.push(c2);
                    c2 = NULL;
                }
                //else we store the element of second tree in the list 
                //and move the pointer to its right subtree. 
                //we push the popped element from first stack back into stack.
                else
                {
                    ans.push_back(c2->data);
                    c2 = c2->right;
                    s1.push(c1);
                    c1 = NULL;
                }
            }
        }
        //returning the output list.
        return ans;
    }

};
