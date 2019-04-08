
int main()
{
	int a,b,c,d;
	scanf("%d %d %d",&a,&b,&c);
	if((a%100!=0&&a/4==0)||a%400==0)
	{
      switch(b)
	  {
	  case 1:printf("%d",c); break;
	  case 2:printf("%d",d=31+c);break;
      case 3:printf("%d",d=60+c);break;
	  case 4:printf("%d",d=91+c);break;
	  case 5:printf("%d",d=121+c);break;
	  case 6:printf("%d",d=152+c);break;
	  case 7:printf("%d",d=182+c);break;
	  case 8:printf("%d",d=213+c);break;
	  case 9:printf("%d",d=244+c);break;
	  case 10:printf("%d",d=274+c);break;
	  case 11:printf("%d",d=305+c);break;
	  case 12:printf("%d",d=335+c);break;
	  }
	}
	else 
	{
		switch(b)
		{
        case 1:printf("%d",c);break;
		case 2:printf("%d",d=31+c);break;
		case 3:printf("%d",d=59+c);break;
		case 4:printf("%d",d=90+c);break;
		case 5:printf("%d",d=120+c);break;
		case 6:printf("%d",d=151+c);break;
		case 7:printf("%d",d=181+c);break;
		case 8:printf("%d",d=212+c);break;
		case 9:printf("%d",d=243+c);break;
		case 10:printf("%d",d=273+c);break;
		case 11:printf("%d",d=304+c);break;
		case 12:printf("%d",d=334+c);break;
		}
	}
 return 0;
}

