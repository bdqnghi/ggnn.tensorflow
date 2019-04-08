int main()
{
    int num(int m, int n);
    int t,i,x[100],m,n;
    scanf("%d", &t);
    for(i=1;i<=t;i++)
    {
                     scanf("%d%d", &m, &n);
                     x[i]=num(m,n);
    }
    for(i=1;i<=t;i++)
    {
                     printf("%d\n", x[i]);
    }
   
    return 0;
}

   int num(int m, int n)
   {
       
	if(n==1||m==0)
	{
    return 1;
    }
    else if(m<n)
	{
         return num(m,m);
    }
    return num(m,n-1)+num(m-n,n);
}