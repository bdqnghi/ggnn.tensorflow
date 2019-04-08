void main()
{
	int c[200];
	int i,num,y,m,d,k,t;
	int a[12]={0,31,59,90,120,151,181,212,243,273,304,334};
	int b[12]={0,31,60,91,121,152,182,213,244,274,305,335};
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
		scanf("%d %d %d",&y,&m,&d);
		if(m>d)
		{
			t=m;
			m=d;
			d=t;

		}
		if(((y%4==0)&&(y%100!=0))||(y%400==0))
		{
			k=b[d-1]-b[m-1];
			k=k%7;
			if(k==0)
				c[i]=1;
			else
				c[i]=0;
		}
		else
		{
		
			k=a[d-1]-a[m-1];
			k=k%7;
			if(k==0)
				c[i]=1;
			else
				c[i]=0;
		}
	}
	for(i=0;i<num;i++)
	{
		if(c[i]==1)
			printf("YES\n");
		else
			printf("NO\n");
	}
}