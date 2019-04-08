void main ()
{
	float n;
	int help,j,a,b;
	float x,i;
	j=2;
	a=0;b=1;

	scanf("%f",&n);

	for(i=3;i<8;i=i+2)
	{
		x=n/i;
		help=n/i;
		if (x==help) a=a+b;
		j=j+2;
		b=b*2;
		//printf("%d %f %d\n",a,x,help);
	}

	switch(a)
	{
	 case 0:printf("n");break;
	 case 1:printf("3");break;
	 case 2:printf("5");break;
	 case 3:printf("3 5");break;
	 case 4:printf("7");break;
     case 5:printf("3 7");break;
	 case 6:printf("5 7");break;
	 case 7:printf("3 5 7");break;
	 default:;
	}
}