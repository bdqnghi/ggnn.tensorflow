int main()
{
	int y,m,d,n;
	scanf("%d%d%d",&y,&m,&d);
	if(((y+400)%400==0)||((y%4==0)&&((y%100)!=0)))
	{
		if (m==1)
			n=d;
		else if(m==2)
			n=31+d;
		else if(m==3)
			n=60+d;
		else if(m==4)
			n=91+d;
		else if(m==5)
			n=121+d;
		else if(m==6)
			n=152+d;
		else if(m==7)
			n=182+d;
		else if(m==8)
			n=213+d;
		else if(m==9)
			n=244+d;
		else if(m==10)
			n=274+d;
		else if(m==11)
			n=305+d;
		else if(m==12)
			n=335+d;
		printf("%d\n",n);
	}
	else
	{
		if (m==1)
			n=d;
		else if(m==2)
			n=31+d;
		else if(m==3)
			n=59+d;
		else if(m==4)
			n=90+d;
		else if(m==5)
			n=120+d;
		else if(m==6)
			n=151+d;
		else if(m==7)
			n=181+d;
		else if(m==8)
			n=212+d;
		else if(m==9)
			n=243+d;
		else if(m==10)
			n=273+d;
		else if(m==11)
			n=304+d;
		else if(m==12)
			n=334+d;
		printf("%d\n",n);
	}
	return 0;
}
