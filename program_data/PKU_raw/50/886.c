
int main()
{
	int w,i,j;
	scanf("%d",&w);
	int month[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	int day[13];
	day[1]=13;
	for(i=2;i<13;i++)
	{
		
		day[i]=day[i-1]+month[i-1];
	}

	for(i=1;i<13;i++)
	{
		if((day[i]+w-1)%7==5)
			printf("%d\n",i);
	    else continue;
	}
	return 0;
}
