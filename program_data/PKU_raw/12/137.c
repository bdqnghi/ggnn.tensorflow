int main ( )
{
	int num[16],i,j,count,a,n;
	while(1)
	{
		count=0;n=0;
		for(i=0;;i++)
		{
			scanf("%d",&num[i]);
			if(num[i]==-1)
				break;
			if(num[i]==0)
				break;
			n+=1;
		}
		if(num[0]==-1)
			break;
		else
		{
			for(i=0;i<n;i++)
			{
				a=num[i];
				for(j=0;j<n;j++)
					if(num[j]==2*a)
						count+=1;
			}
		}
		printf("%d\n",count);
	}
	return 0;
}