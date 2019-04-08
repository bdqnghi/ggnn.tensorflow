int main()
{
	int n,i,sum;
	
scanf("%d",&n);

		sum=0;
		for(i=1;i<=n;i++)
		{
			if(i!=7 && i!=14 && i!=21 && i!=28 && i!=35 && i!=42 && i!=49 && i!=56 && i!=63 && i!=70 && i!=77 && i!=84 && i!=91 && i!=98 && i!=17 && i!=27 && i!=37 && i!=47 && i!=57 && i!=67 && i!=87 && i!=97 && i!=71 && i!=72 && i!=73 && i!=74 && i!=75 && i!=76 && i!=78 && i!=79)
				sum=sum+i*i;
			else
				continue;
		}
		printf("%d",sum);
	return 0;
}