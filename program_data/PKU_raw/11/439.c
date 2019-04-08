
int main()
{
	int yy,mm,dd,i,n=0;
	scanf("%d%d%d",&yy,&mm,&dd);
	if(yy%4==0&&yy%100!=0||yy%400==0)
	{
		for(i=1;i<mm;i++)
		{
			switch(i)
			{
			case 1:
					n=n+31;
					break;
			case 2:

					n=n+29;
					break;
			case 3:
					n=n+31;
					break;
			case 4:
					n=n+30;
					break;
			case 5:
					n=n+31;
					break;
			case 6:
					n=n+30;
					break;
			case 7:
					n=n+31;
					break;
			case 8:
					n=n+31;
					break;
			case 9:
					n=n+30;
					break;
			case 10:
					n=n+31;
					break;
			case 11:
					n=n+30;
					break;
			case 12:
					n=n+31;
					break;

			}
		}

			n=n+dd;
			printf("%d",n);


	}

	else
	{
		for(i=1;i<mm;i++)
		{
			switch(i)
			{
			case 1:
					n=n+31;
					break;
			case 2:
					n=n+28;
					break;
			case 3:
					n=n+31;
					break;
			case 4:
					n=n+30;
					break;
			case 5:
					n=n+31;
					break;
			case 6:
					n=n+30;
					break;
			case 7:
					n=n+31;
					break;
			case 8:
					n=n+31;
					break;
			case 9:
					n=n+30;
					break;
			case 10:
					n=n+31;
					break;
			case 11:
					n=n+30;
					break;
			case 12:
					n=n+31;
					break;

			}
		}

			n=n+dd;
			printf("%d",n);

	}

	return 0;
}
