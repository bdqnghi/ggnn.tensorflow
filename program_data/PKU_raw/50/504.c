
int main(int argc, char* argv[])
{
	int i,w,a,b,day,s=0;

	scanf("%d",&w);
	for(i=1;i<13;i++)
	{
		switch (i)
		{
		case 1:{
			day=0;
			break;}
		case 2:
		case 4:
		case 6:
		case 8:
		case 9:
		case 11:{
			day=31;
			break;}
		case 3:{
			day=28;
			break;}
		default:{
			day=30;
			break;}
		}
		s=s+day;
		a=12+s;
		b=a%7+w;
		if (b%7==5){
			printf("%d\n",i);}
	}

	return 0;
}

