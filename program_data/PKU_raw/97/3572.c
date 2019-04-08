int main()
{
	int x,a,i;
	scanf("%d",&x);
	for(i=0;i<6;i++)
	{
		switch(i)
		{
		case 0:
			a=x/100;
			x=x%100;
			printf("%d\n",a);
			break;
		case 1:
			a=x/50;
			x=x%50;
			printf("%d\n",a);
			break;
		case 2:
			a=x/20;
			x=x%20;
			printf("%d\n",a);
			break;
	    case 3:
			a=x/10;
			x=x%10;
			printf("%d\n",a);
			break;
		case 4:
			a=x/5;
			x=x%5;
			printf("%d\n",a);
			break;
		default:
			{a=x/1;
			x=x%1;
			printf("%d\n",a);
			break;}
		}
	}
	return 0;
}

