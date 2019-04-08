
char f(int max,int a[],char m, char n)
{
	char num1,num2;
	if(m==n&&a[n-1]<=max)
		return(1);
	else if(m==n&&a[n-1]>max)
		return(0);
	else 
	{
		if(a[m-1]<=max)
		{
			num1=f(max,a,m+1,n);
			num2=f(a[m-1],a,m+1,n)+1;
			if(num1>num2)
				return(num1);
			else
				return(num2);
		}
		else
			return(f(max,a,m+1,n));
	}
	
}


void main()
{
	int hmax=(unsigned)(~0)>>1;
	int h[N];
	char n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&h[i]);
	printf("%d\n",f(hmax,h,1,n));
	printf("input:\n");
	for(i=0;i<n;i++)
		printf("%d,",h[i]);
	

}