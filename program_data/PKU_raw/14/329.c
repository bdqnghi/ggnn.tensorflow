   struct student
   {
      int n;
      int y;
      int s;
   };
int cmp(const void *a,const void *b)
{
return(((struct student *)b)->y > ((struct student *)a)->y?1:-1);
}

main()
{    
    int num;
    scanf("%d",&num);
    struct student s[100000];
    for(int i=0;i<num;i++)
    {
            scanf("%d %d %d",&s[i].n,&s[i].y,&s[i].s);
            s[i].y=s[i].y+s[i].s;        
    }
    qsort(s,num,sizeof(s[0]),cmp);
    for(int i=0;i<3;i++)
     printf("%d %d\n",s[i].n,s[i].y);      
} 