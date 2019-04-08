int main()
{
	int n,m,p[300];//??????????????????????
	int j,i,t,count;
	scanf("%d %d",&n,&m);
	
    for(i=0;i<n;i++)//????????????????
	{
		p[i]=i+1;
	}
    for(t=0,j=0,count=0;;j++)//count=0,t=0
	{
		for(i=0;i<n;i++)//count!=0,t!=0
		{
			if(p[i]!=0)
			{
				count++;
			}
			if(count==m)
			{
				p[i]=0;
				t++;
				count=0;
            }
		}
		if(t==n-1)//==
		{
			break;
		}
	}
	for(i=0;i<n;i++)
	{
		if(p[i]!=0)//????
		{
			printf("%d",p[i]);
			return 0;
		}
	}
return 1;
}