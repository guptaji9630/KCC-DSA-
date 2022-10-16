

/*
 * Complete the 'insertNodeAtPosition' function below.
 *
 * The function is expected to return an INTEGER_SINGLY_LINKED_LIST.
 * The function accepts following parameters:
 *  1. INTEGER_SINGLY_LINKED_LIST llist
 *  2. INTEGER data
 *  3. INTEGER position
 */

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */

SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* head, int data, int position) {
    // if(llist == NULL){
    //     llist = new SinglyLinkedListNode(data);
    //     return llist;
    // }
    // SinglyLinkedListNode * temp = llist;
    // while(temp->next->data!= position){
    //     temp =temp->next;
    // }
    // SinglyLinkedListNode * n= new SinglyLinkedListNode(data);
    // n->next= temp->next;
    // temp->next =n;
    // return 0;
    SinglyLinkedListNode *temp=new SinglyLinkedListNode(data);
SinglyLinkedListNode *nh= head;
for(int i=0;i<position-1;i++)
{
    nh=nh->next;
}
SinglyLinkedListNode *t;
t=nh->next ;
nh->next=temp;
temp->next=t;
return head;

}


