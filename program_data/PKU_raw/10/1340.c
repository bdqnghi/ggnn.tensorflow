int max(int a[],int m);
int s[30];
void main()
{
	int a[100],k,i,n;
	for(i=0;i<30;i++)
		s[i]=1;
	scanf("%d",&k);
	for(i=k;i>0;i--)
		scanf("%d",&a[i]);
	a[k+1]=100000;
	n=max(a,k+1);
	printf("%d\n",n-1);
}


int max(int a[],int m)
{
	int x,i,t=0;
	x=a[m];
	if(m==1)
		return(1);
	else
	{
		for(i=m-1;i>0;i--)
		{
			if(x>=a[i]&&t<max(a,i))
				t=max(a,i);
		}
		return(t+1);
	}
}