int main()
{
	int n,i,j,k,day1=0,day2=0,cha=0;
	int nian,y1,y2,mont[13]={0,31,28,31,30,31,30,31,31,30,31,30,31}; ;
	
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		
		day1=0;
		day2=0;
		cha=0;
		scanf("%d %d %d",&nian,&y1,&y2);
		if ((nian%4==0 && nian%100!=0)||nian%400==0) 
			mont[2]=29; 
        else  
            mont[2]=28;
		for(j=0;j<y1;j++)	
			day1+=mont[j];
		for(k=0;k<y2;k++)
			day2+=mont[k];
		cha=day1-day2;
		if((day1-day2)<0)
			cha=day2-day1;
		if((cha%7)==0)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}