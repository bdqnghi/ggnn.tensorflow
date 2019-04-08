struct Node
{
 char Info[200];
 struct Node *Next;
};
 
int Insert(struct Node *Head)
{
    struct Node *Tmp;
    Tmp=(struct Node *)malloc(sizeof(struct Node));
    gets(Tmp->Info);
    if(strcmp(Tmp->Info,"end")==0)
       {
         free(Tmp);
         return 0;
       }
    else
        {
          Tmp->Next=Head->Next;
          Head->Next=Tmp;
          return 1;
        }
}

int main()
{
    struct Node *Head,*Tmp;
    Head=(struct Node *)malloc(sizeof(struct Node));
    Head->Next=NULL;
    while(Insert(Head));
    Tmp=Head;
    while(Tmp->Next!=NULL)
         {
          Tmp=Tmp->Next;
          printf("%s\n",Tmp->Info);
         }
   return 1;
}          


