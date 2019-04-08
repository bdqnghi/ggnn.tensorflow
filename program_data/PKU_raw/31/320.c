struct student
{
       char id[400];
       struct student *pre;
};
int main()
{
    int i=1,n=0;
    struct student a[1000],*head,*p;
    do
    {
                          gets(a[i].id);
                          i++;
                          n++;
    } while(a[i-1].id[0]!='e');
    head=&a[n-1];
    for(i=n-1;i>=2;i--)
    {a[i].pre=&a[i-1];}
    a[1].pre=NULL;
    p=head;
    for(i=1;i<=n-1;i++)
    {
                     puts(p->id);
                     p=p->pre;
    }
    return 0;
    
}
