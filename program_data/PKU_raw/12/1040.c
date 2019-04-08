int main()
{
	int i,j,h,k,m;
	int a[20];
	for(k=0;;k++)
{
		for(i=0;i<16;i++)
	{
		scanf("%d",&a[i]);
		if(a[0]==-1)
		{
			break;
		}
		m=0;
		if(a[i]==0)
		{
			for(j=0;j<i-1;j++)
			{
				for(k=j+1;k<i;k++)
				{
					if(a[k]==a[j]*2||a[j]==a[k]*2)
					{
						m++;
					}
				}
			}
			printf("%d\n",m);
			break;
		}
	}
		if(a[0]==-1)
		{
			break;
		}
		
}
	return 0;
	
	
}