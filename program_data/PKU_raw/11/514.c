int main(int argc, char* argv[])
{
	int year,month,day,month2,n;
	scanf("%d %d %d",&year,&month,&day);
		if (year%4==0&&year%100!=0||year%400==0)
			month2=29;
		else
			month2=28;
if (month==1)
	n=day;
if (month==2) 
    n=31+day;
if(month==3)
    n=31+month2+day;
if(month==4)
   n=31+month2+31+day;
if(month==5)
  n=31+month2+31+30+day;
if(month==6)
 n=31+month2+31+30+31+day;  
if(month==7)
n=31+month2+31+30+31+30+day;
if(month==8)
n=31+month2+31+30+31+30+31+day;
if(month==9)
n=31+month2+31+30+31+30+31+31+day;
if(month==10)
n=31+month2+31+30+31+30+31+31+30+day;
if(month==11)
n=31+month2+31+30+31+30+31+31+30+31+day;
if(month==12)
n=31+month2+31+30+31+30+31+31+30+31+30+day;
printf("%d",n);
 return 0;
}
