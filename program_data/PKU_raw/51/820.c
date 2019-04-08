struct zimu
{
       char a[6];
       int b;
};
int main()
{
    struct zimu r[501];
    struct zimu temp;
    char s[501]={'\0'};
    int n,k,i,j,p;
    scanf("%d",&n);
    getchar();
    gets(s);
    k=strlen(s);
    for(i=0;i<k+n-1;i++)
    {
                        for(j=0;j<6;j++)
                        {
                           r[i].a[j]=0;
                        }
                        r[i].b=0;
    }
    for(i=0;i<k-n+1;i++)
    {
                        for(p=0,j=i;j<i+n;j++,p++)
                        {
                                          r[i].a[p]=s[j];
                        }
    }
    for(i=0;i<k-n+1;i++)
    {
                        for(j=i;j<k-n+1;j++)
                        {
                                            if(strcmp(r[j].a,r[i].a)==0)
                                            {
                                                                        r[i].b=r[i].b+1;
                                            }
                        }
    }
    for(i=1;i<k-n+1;i++)
    {
                        for(j=0;j<k-n+1-i;j++)
                        {
                                              if(r[j].b<r[j+1].b)
                                              {
                                                               temp=r[j];
                                                               r[j]=r[j+1];
                                                               r[j+1]=temp;
                                              }
                        }
    }
    if(r[0].b>1)
    {
    printf("%d\n",r[0].b);
    for(i=0;i<k+n-1;i++)
    {
                        if(r[i].b==r[0].b)
                        {
                                          printf("%s\n",r[i].a);
                        }
    }
    }
    else
    printf("NO");
   
  
    return 0;
}
       
                       