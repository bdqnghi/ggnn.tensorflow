main()
{
	int n,b=1,i,sum=0,k;
	scanf("%d",&n);

		for(i=1;i<=n;i++)	
		{
			if(i%7!=0 && i!=17&&i!=27&&i!=37&&i!=47&&i!=57&&i!=67&&i!=87&&i!=97&&i!=71&&i!=72&&i!=73&&i!=74&&i!=75&&i!=76&&i!=78&&i!=79&&i!=7&&i!=14&&i!=21)
			{	
				b=i*i;
		    
				sum=b+sum;
			}
                          
			
		}
		printf("%d\n",sum);
		return 0;
}
			


