int f(int m,int n)
{
	if(n==1) return 1;
	else if(m==0) return 1;
	else
	{
		if(m<n) return f(m,m);
		else return f(m,n-1)+f(m-n,n);
	}
}
void main()
{
	int i,m,n,k,l;
         scanf("%d",&l);
          for(i=0;i<l;i++)
         {
	scanf("%d %d",&m,&n);
	k=f(m,n);
	printf("%d\n",k);}
}

