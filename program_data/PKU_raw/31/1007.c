typedef struct  node
{
    char s[100];
    struct node *next;
}node;
int main()
{
   node *p1,*p2,*head;
   head=(node*)malloc(sizeof(node));
   p1=head;
   p2=head;
   int i=0;
   while(1)
   {
       p2=(node*)malloc(sizeof(node));
       if(i==0)
        p2->next=NULL;
       else
        p2->next=p1;
       p1=p2;
       gets(p2->s);
       if(strcmp(p2->s,"end")==0)
       break;
       head->next=p2;
       i=1;
   }
   p1=head->next;
   while(p1!=NULL)
   {
       printf("%s\n",p1->s);
       p1=p1->next;
   }

    return 0;
}
