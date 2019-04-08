int main()
{
	int i,j,m,n,k,e=0,t=0,a[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{	
		e=0;
		t=0;
		scanf("%d",&m);
		for(j=0;j<m;j++)
		{
			scanf("%d",&a[j]);
		}
		for(j=0;j<m;j++)
		{
			t=3*j+a[j];
			if(t>=57&&t<=60)
			{
			    printf("%d\n",a[j]);
				break;	
			}
			if(t>60)
			{
				a[j]-=t-60;
				printf("%d\n",a[j]);
				break;
			}
		}
		if(t<57)
		{
			printf("%d\n",60-3*m);
		}
	
	}
	
	return 0;
}
