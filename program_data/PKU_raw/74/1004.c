int hws(int x)
{    int a[10],b=x,i,j,s=0,k=1;
     a[0]=x%10;x=x/10;
     for(i=1;x!=0;i++)
{    a[i]=x%10;x=x/10;
}    for(j=i-1;j>=0;j--)
{    s=s+a[j]*k;
     k=k*10;
}    if(s-b==0) return(1);
      else return(0);
}
int ss(int x)
{    int i,j,k=1;
     for(i=2;i<x;i++)
{    if(x%i==0)k=0;
     else k=k*1;
}    if(k==1) return(1);
     else return(0);
}
void main()
{   int m,n,j,i,s=0;
    scanf("%d%d",&m,&n);
    for(i=m;i<=n;i++)
{   if(hws(i)==1&&ss(i)==1)
  {if(s==0)  printf("%d",i),s++;
    else printf(",%d",i);
} } if(s==0) printf("no");
}





