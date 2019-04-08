int main()
{
	int w,m,x,sd=13,p,d,i;
	scanf("%d",&w);
	for(m=1;m<=12;m++)
	{
		for(i=1;i<=m;i++)
		{
			switch(i)
			{
				case 1:
				p=0;
				break;	case 2:
				p=31;
				break;	case 3:
				p=28;
				break;	case 4:
				p=31;
				break;	case 5:
				p=30;
				break;	case 6:
				p=31;
				break;	case 7:
				p=30;
				break;	case 8:
				p=31;
				break;	case 9:
				p=31;
				break;	case 10:
				p=30;
				break;	case 11:
				p=31;
				break;	case 12:
				p=30;
			}
			
		}sd=sd+p;
		d=sd%7;
		x=(d+w-1)%7;
		if(x==5)
			printf("%d\n",m);
	}
	return 0;
}