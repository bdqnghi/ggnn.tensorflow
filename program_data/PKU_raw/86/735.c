int main()
{
	int n,m,no[20]={0},i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&m);
		if(m==0)
			printf("60\n");
		else
		{
			for(j=0;j<m;j++)
				scanf("%d",&no[j]);
			if(no[m-1]+3*m<=60)
				printf("%d\n",60-3*m);
			else
			{
				for(j=0;j<m;j++)
				{
					if(no[j]+3*(j+1)>63)
					{
						if(no[j-1]+3*j<=60)
							printf("%d\n",60-3*j);
						else
							printf("%d\n",no[j-1]);
						break;
					}
					if(no[j]+3*(j+1)>60&&no[j]+3*(j+1)<=63)
					{
						printf("%d\n",no[j]);
						break;
					}
				}
			}
			
		}
	}
	return 0;
}