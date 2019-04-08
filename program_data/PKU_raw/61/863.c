int main()
{
    int f(int n);
    int n,a,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
      {
        int s;
        
        scanf("%d",&a);
        s=f(a);
        printf("%d\n",s);
        }
     getchar();
     getchar();
}
int f(int n)
{
    int z;
    if(n==1||n==2)
      z=1;
     else
     z=f(n-1)+f(n-2);
     return(z);
}              
