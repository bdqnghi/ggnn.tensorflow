int put(int m,int n)
{
	int c;
	if(n==1 || n==0)
		c=1;
	else if(m==1 || m==0)
		c=1;
           else if(m<n)
                      c=put(m,m);
	else
		c=put(m,n-1)+put(m-n,n);
	return(c);
}
 int main()
 {
	 int u;
	 scanf("%d",&u);
	 int a[100][2];
	 int i;
	 for(i=0;i<=u-1;i++)
	 scanf("%d %d",&a[i][0],&a[i][1]);
	 for(i=0;i<=u-1;i++)
	 printf("%d\n",put(a[i][0],a[i][1]));
	 return 0;
 }

