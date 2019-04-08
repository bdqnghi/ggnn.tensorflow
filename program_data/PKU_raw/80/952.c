int main()
{
	int y,m,d;
	int c,h,l;
	scanf("%d%d%d%d%d%d",&y,&m,&d,&c,&h,&l);
	int day=0;
	int a[13];
	a[1]=31;
	a[3]=31;
	a[5]=31;
	a[7]=31;
	a[8]=31;
	a[10]=31;
	a[12]=31;
	a[2]=29;
	a[4]=30;
	a[6]=30;
	a[9]=30;
	a[11]=30;
	int b[13];
	b[1]=31;
	b[3]=31;
	b[5]=31;
	b[7]=31;
	b[8]=31;
	b[10]=31;
	b[12]=31;
	b[2]=28;
	b[4]=30;
	b[6]=30;
	b[9]=30;
	b[11]=30;
	int i,j;
	for(i=y;i<=c;i++)
	{
		if(i==y)
		{	j=m;}
		else
		{j=1;}
		for(j;j<=12;j++)
		{
			if(i==c && j==h)
			{break;}
			if((i%4==0&&i%100!=0)||(i%400==0))
			{day+=a[j];}
			else
			{day+=b[j];	}
		}
	}
	day=day-d+l;
	printf("%d",day);
	return 0;
}
