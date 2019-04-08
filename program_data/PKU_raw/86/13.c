
int main()
{
    int j,e,i,d,a[60];
	int m,n,k=1;
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		scanf("%d",&m);
		for (j=0;j<m;j++)
			scanf("%d",&a[j]);
		for (j=0;j<m;j++)
		{
			
			if ((60-a[j]-j*3)*(59-a[j]-j*3)*(58-a[j]-j*3)==0)
			{
				printf("%d\n",a[j]);
				break;
			}
			if ((58-a[j]-j*3)<0)
			{
				printf("%d\n",(60-3*j));
				break;
			}
		}
		
		if ((58-a[j]-j*3)>0)
			printf("%d\n",(60-3*m));
	}
	

	return 0;
}
