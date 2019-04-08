
int main()
{
	int a,b,c,i,sum;
	scanf("%d%d%d",&a,&b,&c);
	sum=0;
	for(i=1;i<b;i++)
	{
		switch(i)
		{
		case 1:
			sum+=31;
			break;
		case 2:
			if(a%400==0||(a%100!=0)&&(a%4==0))
			{
				sum+=29;
			}
			else
			{
				sum+=28;
			}
			break;
		case 3:
			sum+=31;
			break;
		case 4:
			sum+=30;
			break;
		case 5:
			sum+=31;
			break;
		case 6:
			sum+=30;
			break;
		case 7:
			sum+=31;
			break;
		case 8:
			sum+=31;
			break;
		case 9:
			sum+=30;
			break;
		case 10:
			sum+=31;
			break;
		case 11:
			sum+=30;
			break;
		case 12:
			sum+=31;
			break;
		}
	}
	sum+=c;
	printf("%d\n",sum);
	return 0;
}