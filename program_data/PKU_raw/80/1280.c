
int main()
{
	int y1,m1,d1,y2,m2,d2,a,i,gap,y;
	int month[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};	
	
	scanf("%d %d %d",&y1,&m1,&d1);
	scanf("%d %d %d",&y2,&m2,&d2);
	gap=0;

	if(y1>y2){
		a=y1;
		y1=y2;
		y2=a;
	}

	for(y=y1;y<=y2;y++)
	{
		if(y%400==0||(y%100!=0&&y%4==0))
		{
			gap+=366;
		}else{
			gap+=365;
		}
	}

	if(y1%400==0||(y1%100!=0&&y1%4==0))
	{
		month[2]=29;
	}
	for(i=1;i<m1;i++)
	{
		gap-=month[i];
	}
	gap-=d1;

	if((y2%400==0||(y2%100!=0&&y2%4==0))==0)
	{
		month[2]=28;
	}
	for(i=m2;i<=12;i++)
	{
		gap-=month[i];
	}
	gap+=d2;

	printf("%d",gap);

	return 0;
}
	