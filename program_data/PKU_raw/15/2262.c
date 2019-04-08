int main()
{
	int b[1000]={0};
	int a,i,j,k=0,d=0,l=0,c=0,temp=0;
	scanf("%d\n",&a);
	for(i=0;i<a;i++)
	{
		for(j=0;j<a;j++)
		{
			scanf("%d",&b[j]);
		}
		for(j=0;j<a;j++)
		{
			if(b[j]==0&&c==0)
			{
				k=k+1;
				d=1;
				temp=j-k+1;
			}
		}
		if(d==1)
		{
			c=1;
		}
			if(b[temp]==0&&d==1)
			{
				l=l+1;
			}
			else
			{
				continue;
			}
	}
	printf("%d\n",(k-2)*(l-2));
}