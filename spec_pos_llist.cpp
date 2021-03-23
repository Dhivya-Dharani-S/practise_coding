SinglyLinkedListNode *temp = (SinglyLinkedListNode*)malloc(sizeof(SinglyLinkedListNode));
temp->data = data;
temp->next = NULL;
SinglyLinkedListNode *p = head;
SinglyLinkedListNode *q;
int l = 0;
if(position==1)
{
    temp->next = head;
    p = temp;
}

else
{
while(head!=NULL && l< position )
{
q = head;
head = head->next;
l++;
}
if(head==NULL)
{return p;}
else{
    q->next = temp;
    temp->next = head;
}
}
return p;
