main()
{
	int i,w,day[12];
	int mon[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	scanf("%d",&w);
	day[0]=13;
	for(i=1;i<12;i++)
		day[i]=day[i-1]+mon[i-1];
	for(i=0;i<12;i++)
		if((day[i]+w)%7==6)
			printf("%d\n",i+1);
	return 0;
}