int main()
{
	int w,weekday[12],day[12]={12,43,71,102,132,163,193,224,255,285,316,346};
	int m,i;
	scanf("%d",&w);
	for(i=0;i<12;i++)
	{
		weekday[i]=day[i]%7;
	}
	for(i=0;i<12;i++)
	{
		if(w+weekday[i]>7)
			weekday[i]=w+weekday[i]-7;
		else
			weekday[i]=w+weekday[i];
	}
	for(i=0;i<12;i++)
	{
		if(weekday[i]==5)
		{m=i+1;
			printf("%d\n",m);}
	}
	return 0;
}


 
