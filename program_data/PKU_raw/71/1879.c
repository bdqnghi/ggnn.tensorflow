int main()
{
	int n,x,y,z,i,day,j,t;
	int md[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		scanf("%d%d%d",&x,&y,&z);
		day=0;
		if(y>z){t=y;y=z;z=t;}
		if((x%400==0)||(x%100!=0&&x%4==0))
		{
			if(y==1&&z==2)
			{day=31;}
			if(y<3&&z>2)
			{         
	for(j=y-1;j<z-1;j++)
				{ day=day+md[j];}
	           day=day+1;
			}
			if(y>=3)
			{
               for(j=y-1;j<z-1;j++)
				 day=day+md[j];
			}
		}
		else
		{
         for(j=y-1;j<z-1;j++)
				 day=day+md[j];
		}
        if(day%7==0)printf("YES\n");
		else printf("NO\n");
	}

	return 0;
}

