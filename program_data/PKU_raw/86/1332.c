int main()
{
	int n;
	scanf("%d",&n);
	int i;
	for(i=0;i<n;i++)
	{
		int sum;
		scanf("%d",&sum);
		if(sum==0){printf("60\n");continue;}
		int j,k,a[20];
		for(j=0;j<sum;j++)
		{
			scanf("%d",&a[j]);
		}
		for(j=1;j<=sum;j++)
		{
			if(j!=sum)
			{
				if(a[j-1]+j*3<60&&a[j]+(j+1)*3>=60)
				{
					if(a[j-1]+j*3<=a[j])
					{printf("%d\n",60-j*3);break;}
					else
					{printf("%d\n",a[j]);break;}
				}
			}
			else
			{
				printf("%d\n",60-j*3);
			}
		}
	}
	return 0;
}
	
