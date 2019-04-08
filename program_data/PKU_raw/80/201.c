
int main()
{
	int total(int year,int month,int day);
	int yearo, montho, dayo, totalo,totalt,yeart, montht, dayt,t,y,i,temp=0;
	scanf("%d %d %d",&yearo, &montho, &dayo);
	scanf("%d %d %d",&yeart, &montht, &dayt);
//	if((yearo>yeart)||((yearo=yeart)&&(montho>montht))||((yearo=yeart)&&(montho=montht)&&(dayo>dayt)))
		
//	{	totalo=total(yeart, montht, dayt);
//		totalt=total(yearo, montho, dayo);
//		yearo=y;
///		yearo=yeart;
//		yeart=y;
//	}
//	else
//			{
				totalo=total(yearo, montho, dayo);
		totalt=total(yeart, montht, dayt);
//	}
	t=totalt-totalo+365*(yeart-yearo);
	for(i=yearo;i<=yeart;i++)
	{
		if(((i % 4 == 0) &&( i % 100 != 0))|| (i % 400 == 0))
		t++;
	}
			printf("%d",t);
	return 0;
}

	
int total(int year,int month,int day)	
{	int i;
		int mday[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
		int total=0;
		for( i=1; i<month; i++)
		{
			total = total + mday[i-1];
		}
//		if( ((year%4==0&&year%100!=0) || year%400==0 )&&(month>2))
//			total = total + 1;
		total = total + day;		
	return total;
}
