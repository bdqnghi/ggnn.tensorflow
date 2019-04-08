int main(int argc, char* argv[])
{
	int a,b,c,d;
	scanf("%d %d %d",&a,&b,&c);
	if(a%4==0&&a%100!=0||a%400==0)
	{
			switch(b)
		{
			case 1:
				d=c;
				break;
			case 2:
				d=31+c;
                break;
			case 3:
				d=60+c;
				break;
			case 4:
				d=91+c;
				break;
			case 5:
				d=121+c;
				break;
			case 6:
				d=152+c;
				break;
			case 7:
				d=182+c;
				break;
			case 8:
				d=213+c;
				break;
			case 9:
				d=244+c;
				break;
			case 10:
				d=274+c;
				break;
			case 11:
				d=305+c;
				break;
			case 12:
				d=335+c;
				break;
		}
			printf("%d",d);
	}
		else
		{
			switch(b)
		{
			case 1:
				d=c;
				break;
			case 2:
				d=31+c;
				break;
			case 3:
				d=59+c;
				break;
			case 4:
				d=90+c;
				break;
			case 5:
				d=120+c;
				break;
			case 6:
				d=151+c;
				break;
			case 7:
				d=181+c;
				break;
			case 8:
				d=212+c;
				break;
			case 9:
				d=243+c;
				break;
			case 10:
				d=273+c;
				break;
			case 11:
				d=304+c;
				break;
			case 12:
				d=334+c;
				break;
		}
		printf("%d",d);
		}
	return 0;
}

