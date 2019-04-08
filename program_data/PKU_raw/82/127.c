
int c[100];
int main()
{
	int e,i,k,n,a[100],b[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d%d",&a[i],&b[i]);
	}
	for(i=0;i<n;i++)
	{
		if((a[i]>=90)&&(a[i]<=140)&&(b[i]>=60)&&(b[i]<=90))
		{
			for(k=i;k<n;k++)
			{
               if((a[k]>=90)&&(a[k]<=140)&&(b[k]>=60)&&(b[k]<=90))
			   {
				   c[i]=c[i]+1;
			   }
			   else
				   break;
			}
		}
	}
	
	for(i=0;i<n-1;i++)
	{
		if(c[i]>c[i+1])
		{
			e=c[i+1];
			c[i+1]=c[i];
			c[i]=e;
		}
	}
	printf("%d",c[n-1]);
	return 0;
}
