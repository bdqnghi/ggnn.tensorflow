int main()
{
    int n,i,j;
    scanf("%d",&n);
    int f(int);
    int (*p)(int);
    p=f;
    for(i=3;i<n/2+1;i=i+2)
    {   
      if((*p)(i)==1&&(*p)(n-i)==1)
       printf("%d %d\n",i,n-i);
     }
     getchar();
     getchar();
 }
 int f(int a)
{
    int i,c;
    for(i=2;i<a;i++)
     if(a%i==0)break;
     if(i==a)//??? 
     c=1;
     else c=2;
     return(c);
}
   