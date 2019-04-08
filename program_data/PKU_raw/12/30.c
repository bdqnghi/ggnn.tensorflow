int main()
{
	int a[20];
	int i=0,n=0,j;
	int count=0;
	do
	{
		n=0;
		count=0;
		scanf("%d",&a[0]);
		if(a[0]!=-1)
		{
			i=1;
			do
			{
				scanf("%d",&a[i]);
				i++;
				count++;
			}while(a[i-1]!=0);

			for(i=0;i<count;i++)
			{
				for(j=i+1;j<count;j++)
				{
					if(a[i]==2*a[j] || 2*a[i]==a[j])
					{
						n++;
					}
				}
			}
			printf("%d\n",n);
		}

	}while(a[0]!=-1);
	return 0;
}