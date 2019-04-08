int panduan(int m,int k,int s)
{
	int i=1;
	
	if((m-k)%s==0)
	{
		while(i<=s)
		{
			m=(m-k)*(s-1)/s;
			if((m-k)%s==0)
				i++;
			else if((m-k)%s!=0)
				break;
		}
		if(i==s)
			return(1);
		else
			return(0);
	}
	else
		return(0);
}

void main()
{
	int i,s,k;
	scanf("%d%d",&s,&k);
	for(i=s;;)
	{
		if(panduan(i,k,s))
		{
			printf("%d\n",i);
			break;
		}
		else
			i=i+1;
	}
}