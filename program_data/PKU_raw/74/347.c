int f1(int x)
{
    int i;
    for(i=2;i<x;i++)
    if(x%i==0)return(0);
    return(1);
}
int f2(int x)
{
    int t[5]={0},i=0,len,j;
    len=x;
    while(len!=0)
    {t[i]=len%10;
     len/=10;
     i++;
    }
    for(j=0;j<i;j++)
    if(t[j]!=t[i-j-1])return(0);
    return(1);
}
main()
{

 int i,j,m,n,e=0;
 scanf("%d%d",&m,&n);
 for(i=m;i<=n;i++)
 if(f1(i)==1&&f2(i)==1)
  {if(e==0){printf("%d",i);e++;}
   else printf(",%d",i);
  }
  if(e==0)printf("no");
}
