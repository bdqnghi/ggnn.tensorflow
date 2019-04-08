struct student
{
       char num[100];
       struct student *pNext;
};
int main()
{
    int i,count=0;
    struct student a[1000],*pheader,*p;
    for(i=0;;i++)
    {
       gets(a[i].num);
       count++;
       if(strcmp(a[i].num,"end")==0)
          break;
    }
    pheader=&a[count-2];
    for(i=count-2;i>=1;i--)
    {
       a[i].pNext=&a[i-1];                  
    }
    a[0].pNext=NULL;
    p=pheader;
    while(p!=NULL)
    {
        puts(p->num);
        p=p->pNext;
    }
}
