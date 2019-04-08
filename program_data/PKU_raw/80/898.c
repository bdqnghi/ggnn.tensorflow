int main()
{
	int a,b,c,d,e,f,m,n;
	int num=0;
	int i,o,p;
	scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
	for(i=a+1;i<d;i++)
	{
		if((i%4==0&&i%100!=0)||(i%400==0))
		{
			num=num+1;
		}
	}
	if(((a%4==0&&a%100!=0)||(a%400==0))&&b<=2)
	{
			num=num+1;
	}
	if(((d%4==0&&d%100!=0)||(d%400==0))&&e>=3)
	{
			num=num+1;
	}

    m=d-a;
	n=365*m+num;
	switch (b)
	{
		case 1:
			o=c;
			break;
		case 2:
		    o=31+c;
		    break;
		case 3:
			o=59+c;
			break;
		case 4:
			o=90+c;
			break;
		case 5:
			o=120+c;
			break;
		case 6:
			o=151+c;
			break;
		case 7:
			o=181+c;
			break;
		case 8:
			o=212+c;
			break;
		case 9:
			o=243+c;
			break;
		case 10:
			o=273+c;
			break;
		case 11:
			o=304+c;
			break;
		case 12:
			o=334+c;
			break;
	}
	switch (e)
	{
		case 1:
			p=f;
			break;
		case 2:
		    p=31+f;
		    break;
		case 3:
			p=59+f;
			break;
		case 4:
			p=90+f;
			break;
		case 5:
			p=120+f;
			break;
		case 6:
			p=151+f;
			break;
		case 7:
			p=181+f;
			break;
		case 8:
			p=212+f;
			break;
		case 9:
			p=243+f;
			break;
		case 10:
			p=273+f;
			break;
		case 11:
			p=304+f;
			break;
		case 12:
			p=334+f;
			break;
	}

	n=n+p-o;
	printf("%d",n);
	return 0;
	}