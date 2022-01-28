Node* removeDuplicates(Node *head)
{
    //Write your code here
    Node* curr = head;

    while (curr->next != NULL)
    {
        if (curr->data == curr->next->data)
        {
            curr->next = curr->next->next;
        }
        else {
            curr = curr->next;
        }
    }
    return head;
}