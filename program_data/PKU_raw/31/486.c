struct stu
{
       char ss[10000];
       struct stu *next;
};
int main()
{
    long int i,j,k,l,m,n;
    struct stu *p,*p1;
    p1=p=(struct stu*)malloc(len);
    p1=null;
    while (1)
    {
          p=(struct stu*)malloc(len);
          gets(p->ss);
          p->next=p1;
          p1=p;
          if (strcmp(p->ss,"end\0")==0) break;
    }
    p=p->next;
    while (p!=null)
    {
          puts(p->ss);
          p=p->next;
    }
    scanf("%d",&i);
}