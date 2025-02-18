/* Hidden stub code will pass a root argument to the function below. Complete the function to solve the challenge. Hint: you may want to write one or more helper functions.

The Node struct is defined as follows:
    struct Node {
        int data;
        Node* left;
        Node* right;
    }
*/
bool valid = true;

void iterateRight(Node *root, int data)
{

    if (root == NULL)
        return;

    if (root->data <= data)
    {
        valid = false;
    }

    iterateRight(root->left, data);
    iterateRight(root->right, data);
}

void iterateLeft(Node *root, int data)
{

    if (root == NULL)
        return;

    if (root->data >= data)
    {
        valid = false;
    }
    iterateLeft(root->left, data);
    iterateLeft(root->right, data);
}

bool checkBST(Node *root)
{

    if (root == NULL)
        return valid;
    if (root->right != NULL)
    {
        if (root->right->data > root->data)
        {
            iterateRight(root->right, root->data);
            checkBST(root->right);
        }

        else
            valid = false;
    }

    if (root->left != NULL)
    {
        if (root->left->data < root->data)
        {
            iterateLeft(root->left, root->data);
            checkBST(root->left);
        }

        else
            valid = false;
    }

    return valid;
}