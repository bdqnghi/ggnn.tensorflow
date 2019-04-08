int a[16];
int main()
{
	int n;
	while(1)
	{
		int i=0,s=0,j;
		while(1)
		{
			scanf("%d",&a[i]);
			if(a[i]==0||a[i]==-1)
			{
				
				n=i;
				break;
			}
			i++;
		}
		if(a[i]==-1)break;
		for(i=0;i<n-1;i++)
			for(j=i+1;j<n;j++)
			{
				if((a[i]==2*a[j])||(a[j]==2*a[i]))
				{
					s++;
			
				}
			}
		printf("%d\n",s);
			s=0;
	}
	return 0;
}

