int main ()
{
	int n,k,i,j,f,zs[N];
	scanf("%d%d",&n,&k);                                     
	for(i=0;i<n;i++)
	{
		scanf("%d",&(zs[i]));
	}
		for(i=0;i<n;i++)
		{
			f=0;
			for(j=0;j<n,j!=i;j++)
			{
				if(zs[i]+zs[j]==k)
				{
					f=1;
					break;
				}
			}
			if(f==1)
			{
				break;
			}
		 }
		if(f==1)
		{
			printf("yes");
		}else
		{
			printf("no");
		}
return 0;
}