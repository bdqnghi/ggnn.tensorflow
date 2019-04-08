int main()
{
	int x[6],i,j=0;
	for(;;)
	{
		for(i=0;i<6;i++)
		{
			scanf("%d",&x[i]);
			if(x[i]==0)
				j++;
		}
		if(j==6)
			return 0;
		else 
			j=0;
		for(i=0;;i++)
		{
			x[2]++;
			if(x[2]==60)
			{
				x[2]=0;
				x[1]++;
			}
			if(x[1]==60)
			{
				x[1]=0;
				x[0]++;
			}
			if(x[0]==(x[3]+12) && x[1]==x[4] && x[2]==x[5])
			{
				printf("%d\n",++i);
				break;
			}
		}
	}
}