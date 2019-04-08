int main()
{
	int a,b,c,n;
	scanf("%d %d %d",&a,&b,&c);
	if(a%400==0||(a%4==0&&a%100!=0))
	{
		switch (b){
		case 1:
			{
				n=c;
				break;
			}
        case 2:
			{
				n=31+c;
	break;
			}
        case 3:
			{
				n=60+c;
	break;
			}
        case 4:
			{
				n=91+c;
	break;
			}
        case 5:
			{
				n=121+c;
	break;
			}
        case 6:
			{
				n=152+c;
	break;
			}
        case 7:
			{
				n=182+c;
	break;
			}
        case 8:
			{
				n=213+c;
	break;
			}
        case 9:
			{
				n=244+c;
	break;
			}
        case 10:
			{
				n=274+c;
	break;
			}
        case 11:
			{
				n=305+c;
	break;
			}
        case 12:
			{
				n=335+c;
	break;
			}
		}

	}
	else
	{
      switch (b){
		case 1:
			{
				n=c;
	break;
			}
        case 2:
			{
				n=31+c;
	break;
			}
        case 3:
			{
				n=59+c;
	break;
			}
        case 4:
			{
				n=90+c;
	break;
			}
        case 5:
			{
				n=120+c;
	break;
			}
        case 6:
			{
				n=151+c;
	break;
			}
        case 7:
			{
				n=181+c;
	break;
			}
        case 8:
			{
				n=212+c;
	break;
			}
        case 9:
			{
				n=243+c;
	break;
			}
        case 10:
			{
				n=273+c;
	break;
			}
        case 11:
			{
				n=304+c;
	break;
			}
        case 12:
			{
				n=334+c;
	break;
			}
		}
	}
	printf("%d",n);
	return 0;
	}
