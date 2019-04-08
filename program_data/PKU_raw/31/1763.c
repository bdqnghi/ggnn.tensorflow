struct stu
{
     char inf[100];       
     struct stu *next;
};


void down(struct stu *now)
{
     if (now->next!=0) down(now->next);
     if (now->next!=0) printf("%s\n",now->inf);
}


int main()
{
    void down(struct stu *now);
    struct stu *head,*now,*neww;
    head=(struct stu*) malloc(sizeof(struct stu));
    head->next=0;
    gets(head->inf);
    now=head;   
     do
     {
       neww=(struct stu*) malloc(sizeof(struct stu));
       neww->next=0;
       gets(neww->inf);
       now->next=neww;
       now=neww;
                                         //      printf("%s\n",now->inf);
       
     }while (strcmp(now->inf,"end")!=0);
    down(head);
 //   int i;scanf("%d",&i); 
    return 0;
}
