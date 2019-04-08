int s(int year,int month,int date){
	int s=0;
	int i;
	if ((year%400==0)||((year%100!=0)&(year%4==0)))
	{
	   int n[12]={31,29,31,30,31,30,31,31,30,31,30,31};
	   for (i=0;(i+1)<month;i++)
	   {
		 s+=n[i];
	   }
	   s=s+date;
	}
	else
	{
	   int n[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	   for (i=0;(i+1)<month;i++)
	   {
		 s+=n[i];
	   }
	   s=s+date;
	}
	
	return s;
}




int main(int argc, char* argv[])
{
	int n,i,year,month1,month2,a,b;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d%d%d",&year,&month1,&month2);
		a=s(year,month1,1);
		b=s(year,month2,1);
		if((a-b)%7==0)printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}