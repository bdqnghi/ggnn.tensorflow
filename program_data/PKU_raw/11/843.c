int main()
{
	int y,m,d,r;
	int c(int y,int m,int d);
	scanf("%d %d %d",&y,&m,&d);
	r=c(y,m,d);
	printf("%d",r);
}

int run(int y)
{
	if (y%400==0) return 1;
	else if (y%100==0) return 0;
		else if (y%4==0) return 1;
	return 0;
}

int c(int y,int m,int d)
{
	int i,total=0,r=0;
	for (i=1;i<m;i++)
		switch (i)
	{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:{r=r+31;break;}
		case 4:
		case 6:
		case 9:
		case 11:{r=r+30;break;}
		case 2:{
				if (run(y)) 
					r=r+29;
			   else r=r+28;
			   break;}
	}
	r=r+d;
	return (r);
}
