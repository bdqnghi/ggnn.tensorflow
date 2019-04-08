void main()
{
	int year,month,day;
	int n;
	int a=0;
	scanf("%d %d %d",&year,&month,&day);
	if((year%4==0&&year%100!=0)||year%400==0)
		a=1;
	if(month==1)
		n=day;
	if(month==2)
		n=31+day;
	if(month==3)
		n=59+day;
	if(month==4)
		n=90+day;
	if(month==5)
		n=120+day;
	if(month==6)
		n=151+day;
	if(month==7)
		n=181+day;
	if(month==8)
		n=212+day;
	if(month==9)
		n=243+day;
	if(month==10)
		n=273+day;
	if(month==11)
		n=304+day;
	if(month==12)
		n=334+12;
	if(month>2&&a==1)
		n++;
	printf("%d",n);
}