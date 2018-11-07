#include "btNode.h"
#include <iostream>

void dumpToArrayInOrder(btNode* bst_root, int* dumpArray)
{
   if (bst_root == 0) return;
   int dumpIndex = 0;
   dumpToArrayInOrderAux(bst_root, dumpArray, dumpIndex);
}

void dumpToArrayInOrderAux(btNode* bst_root, int* dumpArray, int& dumpIndex)
{
   if (bst_root == 0) return;
   dumpToArrayInOrderAux(bst_root->left, dumpArray, dumpIndex);
   dumpArray[dumpIndex++] = bst_root->data;
   dumpToArrayInOrderAux(bst_root->right, dumpArray, dumpIndex);
}

void tree_clear(btNode*& root)
{
   if (root == 0) return;
   tree_clear(root->left);
   tree_clear(root->right);
   delete root;
   root = 0;
}

int bst_size(btNode* bst_root)
{
   if (bst_root == 0) return 0;
   return 1 + bst_size(bst_root->left) + bst_size(bst_root->right);
}

// write definition for bst_insert here
void bst_insert( btNode*& bst_root, int insInt )
{
    btNode* cursor = bst_root;
    btNode* newNode = new btNode;
    newNode->data = insInt;
    newNode -> right = nullptr;
    newNode -> left = nullptr;
    if ( bst_root == 0 )
    {
        bst_root = newNode;
    }
    else
        do
        {
            if ( cursor->data == insInt )
            {
                cursor->data = insInt;
                break;
            }
            else if ( insInt < cursor->data )
            {
                if (cursor -> left == nullptr)
                {
                    cursor -> left = newNode;
                    break;
                }
                else
                    cursor = cursor -> left;
            }
            else if ( cursor->data < insInt )
            {
                if (cursor -> right == nullptr)
                {
                    cursor -> right = newNode;
                    break;
                }
                else
                    cursor = cursor -> right;
            }
        } while ( cursor != nullptr );
}
// write definition for bst_remove here
bool bst_remove( btNode*& bst_root, int remInt )
{
    btNode* cursor = bst_root;
    if (bst_root != nullptr)
    {
        if ( bst_root->data == remInt )
        {
            if (bst_root -> left != nullptr && bst_root -> right != nullptr ) 
            {
                 bst_remove_max(bst_root->left, cursor -> data);
            }
            else
            {
                if ( bst_root -> right == nullptr )
                {
                    bst_root = bst_root -> left;
                }
                else if ( bst_root -> left == nullptr)
                {
                    bst_root = bst_root -> right;
                }
                else
                {
                    bst_root = nullptr;
                }
                delete cursor;
            }
            return 1;
        }
        else if (bst_root->data < remInt)
        {
            return bst_remove( bst_root->right, remInt );
        }
        else if ( remInt < bst_root->data  )
        {
            return bst_remove( bst_root->left, remInt );
        }
    }
    return 0;
}

// write definition for bst_remove_max here
void bst_remove_max( btNode*& bst_root, int& removed )
{
    if (bst_root->right == nullptr) {
        btNode* cursor = bst_root;
        removed = bst_root->data;
        delete bst_root;
        bst_root = cursor->left;
    }
    else
    {
        bst_remove_max(bst_root->right, removed);
    }
}
