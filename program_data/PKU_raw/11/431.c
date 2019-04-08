int main()
{
	int year,a,b,m,n;
	scanf("%d%d%d",&year,&a,&b);
	if ((year%4==0&&year%100!=0)||(year%400==0))
	{
		switch(a)
		{
		case 0:
		case 1: m=0;break;
		case 2: m=1;break;
		case 3: m=0;break;
		case 4: m=1;break;
		case 5: m=1;break;
		case 6: m=2;break;
		case 7: m=2;break;
		case 8: m=3;break;
		case 9: m=4;break;
		case 10:m=4;break;
		case 11:m=5;break;
		case 12:m=5;break;
		}
		n=30*(a-1)+m+b;
	}
	else
	{
		switch(a)
		{
		case 0: 
                  case 1: m=0;break;
		case 2: m=1;break;
		case 3: m=-1;break;
		case 4: m=0;break;
		case 5: m=0;break;
		case 6: m=1;break;
		case 7: m=1;break;
		case 8: m=2;break;
		case 9: m=3;break;
		case 10:m=3;break;
		case 11:m=4;break;
		case 12:m=4;break;
		}
		n=30*(a-1)+m+b;
	}
	printf("%d\n",n);
	return 0;
}