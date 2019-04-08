
int f(int m,int n)
{   
	int a;
	if(n==1) a=1;
	else if(m<n) a=f(m,n-1);
	    else if(m>n) a=f(m,n-1)+f(m-n,n);
	         else a=1+f(m,n-1);
	return(a);
}

int main()
{
	int f(int m,int n);
    int i,m,n,c,t;
    scanf("%d",&t);
	for(i=1;i<=t;i++) 
	{scanf("%d%d",&m,&n);
	c=f(m,n);
	printf("%d\n",c);} 
   return 0; 
}