
int f(char a[],int la,char p[],int lp)
{
    int m=la-1,n=lp-1;
    if(la<lp) return 0;
    while((n>=0)&&(a[m]==p[n]))
    {m--;n--;}
    if(n<0) return 1;
    else return 0;
}

void g(char a[],int l,int k)
{
    a[l-k]=0;
}

void main()
{
    int count,i,j,l,k,c[3]={2,2,3};
    char a[33],b[3][4]={"er","ly","ing"};
    scanf("%d",&count);
    getchar();
    for(i=0;i<count;i++)
    {
       scanf("%s",a);
       l=strlen(a);
       k=0;
       while((k<3)&&(f(a,l,b[k],c[k])==0)) k++;
       if(k<3) g(a,l,c[k]);
       puts(a);
    }
}