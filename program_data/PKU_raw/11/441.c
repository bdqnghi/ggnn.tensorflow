
int main(int argc, char* argv[])
{
	int n=0;
	int year,month,day;
	scanf("%d %d %d",&year,&month,&day);
	if(month==1)n=n+day;
	else if(month==2)n=n+31+day;
	else if(month==3)n=n+59+day;
    else if(month==4)n=n+90+day;
    else if(month==5)n=n+120+day;
    else if(month==6)n=n+151+day;
    else if(month==7)n=n+181+day;
    else if(month==8)n=n+212+day;
    else if(month==9)n=n+243+day;
    else if(month==10)n=n+273+day;
    else if(month==11)n=n+304+day;
	else{n=n+334+day;}
	if( (( (year%4==0)&&(year%100!=0) ) ||(year%400==0))&&(month>2))n=n+1;
	printf("%d",n);
	return 0;
}
