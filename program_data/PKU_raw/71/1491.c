
int main()
{
	int y,m1,m2,n,i,j,k,t;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d%d%d",&y,&m1,&m2);
		if(m1>m2)
		{
			t=m1;
			m1=m2;
			m2=t;
		}
		if(y%4==0&&y%100!=0||y%400==0)
		{
			k=0;
			for(j=m1;j<m2;j++)
			{
				switch(j)
				{
				case 1: k=k+31;break;
				case 2: k=k+29;break;	
				case 3: k=k+31;break;	
				case 4: k=k+30;break;	
				case 5: k=k+31;break;	
				case 6: k=k+30;break;		
				case 7: k=k+31;break;		
				case 8: k=k+31;break;		
				case 9: k=k+30;break;		
				case 10: k=k+31;break;	
				case 11: k=k+30;break;	
				}
			}
		}
		else
		{
			k=0;
			for(j=m1;j<m2;j++)
			{
				switch(j)
				{
				case 1: k=k+31;break;
				case 2: k=k+28;break;	
				case 3: k=k+31;break;	
				case 4: k=k+30;break;	
				case 5: k=k+31;break;	
				case 6: k=k+30;break;		
				case 7: k=k+31;break;		
				case 8: k=k+31;break;		
				case 9: k=k+30;break;		
				case 10: k=k+31;break;	
				case 11: k=k+30;break;	
				}
			}
		}
		if(k%7==0)
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
	}
	return 0;
}



