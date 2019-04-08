int main()
{
	int a,b,i,j,k,d[100],e[100],f[100];
	for(k=0;k<100;k++)
	{
		f[k]=0;
	}
		scanf("%d %d",&a,&b);
		if(a==1||b==1)
			printf("1");
		else{
		if(a!=b)
		{
	d[0]=a;e[0]=b;
	for(i=0;i<100;i++)
	{
		d[i+1]=d[i]/2;
	}
	for(j=0;j<100;j++)
	{
		e[j+1]=e[j]/2;
	}
	for(i=0;i<100;i++)
	{
		for(j=0;j<100;j++)
		{
			if(d[i]==e[j]&&d[i]!=0)
			{
			for(k=0;k<100;k++)
			{
				if(f[k]==0)
					f[k]=d[i];
			}
				break;
			}
		}
	}
	printf("%d",f[0]);
		}
		else printf("%d",a);
		}
	

	return 0;
}