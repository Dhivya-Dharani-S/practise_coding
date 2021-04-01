bool has_cycle(SinglyLinkedListNode* head) 
{
    SinglyLinkedListNode* first =head;
    SinglyLinkedListNode* second =head;
    if(head==NULL)
    {
        return false;
    }
    else
    {
        while( second !=NULL && second->next!=NULL )
        {
            second= second->next->next;
            first= first->next;
            if(first==second){
                return true;
            }
            
        }
    }
return false;

}
