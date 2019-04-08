
int main()
{
	int n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		int y,m1,m2;
		scanf("%d%d%d",&y,&m1,&m2);
		if((y%4==0 && y%100!=0) || y%400==0)
		{
			int j,n1=0,n2=0,M=0;
			for(j=1;j<m1;j++)
			{
				if(j==2)
				{
					n1+=29;
				}
			else if(j==1||j==3||j==5||j==7||j==8||j==10||j==12)
				{
					n1+=31;
				}
				else{
					n1+=30;
				}
			}
            for(j=1;j<m2;j++)
			{
				if(j==2)
				{
					n2+=29;
				}
			else if(j==1||j==3||j==5||j==7||j==8||j==10||j==12)
				{
					n2+=31;
				}
				else{
					n2+=30;
				}
			}
			if(n1<n2)
			{
                M=n2-n1;
				if(M%7==0)
				{
					printf("YES\n");
				}
				else
				{
					printf("NO\n");
				}
			}
            if(n1>n2)
			{
                M=n1-n2;
				if(M%7==0)
				{
					printf("YES\n");
				}
				else
				{
					printf("NO\n");
				}
			}
		}
		else
		{
            int j,n1=0,n2=0,M=0;
			for(j=1;j<m1;j++)
			{
				if(j==2)
				{
					n1+=28;
				}
			else if(j==1||j==3||j==5||j==7||j==8||j==10)
				{
					n1+=31;
				}
				else{
					n1+=30;
				}
			}
            for(j=1;j<m2;j++)
			{
				if(j==2)
				{
					n2+=28;
				}
			else if(j==1||j==3||j==5||j==7||j==8||j==10||j==12)
	
				{
					n2+=31;
				}
				else{
					n2+=30;
				}
			}
			if(n1<n2)
			{
                M=n2-n1;
				if(M%7==0)
				{
					printf("YES\n");
				}
				else
				{
					printf("NO\n");
				}
			}
            if(n1>n2)
			{
                M=n1-n2;
				if(M%7==0)
				{
					printf("YES\n");
				}
				else
				{
					printf("NO\n");
				}
			}
		}
    }
 

	return 0;
}