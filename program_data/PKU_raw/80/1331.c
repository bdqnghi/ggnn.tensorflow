int main()
{
    int a[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    int y1,y2,m1,m2,d1,d2;
	int i,m=0;
	scanf("%d%d%d%d%d%d",&y1,&m1,&d1,&y2,&m2,&d2);
	if(y1<y2)
	{
		for(i=m1+1;i<=12;i++)
        {
			m=m+a[i];
		}
        m=m+a[m1]-d1;
		if((y1 % 4 == 0 && y1 % 100 != 0) || (y1 % 400 == 0))
		{
			if(m1<=2)
				m=m+1;
		}

        for(i=0;i<=m2-1;i++)
		{
			m=m+a[i];
		}
		m=m+d2;
		if((y2 % 4 == 0 && y2 % 100 != 0) || (y2 % 400 == 0))
		{
			if(m2>2)
				m=m+1;
		}

		for(i=y1+1;i<=y2-1;i++)
		{
			if((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0))
                m=m+366;
			else
			    m=m+365;
        }
     
	}
    else
	{
		if(m1<m2)
		{
			for(i=m1+1;i<=m2;i++)
			{
				m=m+a[i];
			}
		    m=a[m1]-d1-(a[m2]-d2);
			if((y1 % 4 == 0 && y1 % 100 != 0) || (y1 % 400 == 0))
			{
				if(m1<=2)
					m=m+1;
			}
		}
		else
			m=d2-d1;
	}


     printf("%d",m);



		
	return 0;
}