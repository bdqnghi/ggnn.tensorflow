
main()
{
	int sum=0;
	int m,n;
	int y1,m1,d1,y2,m2,d2;
	int a[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	scanf("%d %d %d",&y1,&m1,&d1);
	scanf("%d %d %d",&y2,&m2,&d2);
	if(y1!=y2)
	{
		if((y1 % 4 == 0 && y1 % 100 != 0) || (y1 % 400 == 0))
		{
			a[2]=29;
			m=d1;
			for(int i=1;i<m1;i++)
			{
				m+=a[i];
			}
			sum+=366-m;
		}
		else
		{
			a[2]=28;
			m=d1;
			for(int i=1;i<m1;i++)
			{
				m+=a[i];
			}
			sum+=365-m;
		}
		y1++;
		if((y2 % 4 == 0 && y2 % 100 != 0) || (y2 % 400 == 0))
		{
			a[2]=29;
			m=d2;
			for(int i=1;i<m2;i++)
			{
				m+=a[i];
			}
			sum+=m;
		}
		else
		{
			a[2]=28;
			m=d2;
			for(int i=1;i<m2;i++)
			{
				m+=a[i];
			}
			sum+=m;
		}
	}
	else
	{
		if((y1 % 4 == 0 && y1 % 100 != 0) || (y1 % 400 == 0))
		{
			a[2]=29;
			m=d1;
			for(int i=1;i<m1;i++)
			{
				m+=a[i];
			}
			n=d2;
			for(int i=1;i<m2;i++)
			{
				n+=a[i];
			}
			sum=n-m;
		}
		else
		{
			a[2]=28;
			m=d1;
			for(int i=1;i<m1;i++)
			{
				m+=a[i];
			}
			n=d2;
			for(int i=1;i<m2;i++)
			{
				n+=a[i];
			}
			sum=n-m;
		}
	}
	for(;y1<y2;y1++)
	{
		if(((y1%4)==0&&(y1%100)!=0)||((y1%400)==0))
		{
			sum+=366;
		}
		else
		{
			sum+=365;
		}
	}
	printf("%d\n",sum);
} 