void main()
{
	int month[11]={31,28,31,30,31,30,31,31,30,31,30},i,w,day[12];
	day[0]=13;
	scanf("%d",&w);
	for(i=1;i<12;i++)
		day[i]=day[i-1]+month[i-1];
	for(i=0;i<12;i++)
	{
		if((day[i]%7+w-1)%7==5)
			printf("%d\n",i+1);
	}
}
