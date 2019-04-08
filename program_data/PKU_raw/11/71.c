
int main(int argc, char* argv[])
{
    int year,month,day,a;
    scanf("%d %d %d",&year,&month,&day);
    if(year%4==0&&year%100!=0||year%400==0){
		if(month==1)	
			a=day;
		if(month==2)
			a=day+31;
	    if(month==3)
			a=day+60;
        if(month==4)
			a=day+91;
        if(month==5)
			a=day+121;
        if(month==6)
			a=day+152;
        if(month==7)
			a=day+182;
        if(month==8)
			a=day+213; 
        if(month==9)
			a=day+244;
        if(month==10)
			a=day+274;
        if(month==11)
			a=day+305;
        if(month==12)
			a=day+335;}
		else
		{
        if(month==1)a=day;
		if(month==2)a=day+31;
	    if(month==3)a=day+59;
        if(month==4)a=day+90;
        if(month==5)a=day+120;
        if(month==6)a=day+151;
        if(month==7)a=day+181;
        if(month==8)a=day+212; 
        if(month==9)a=day+243;
        if(month==10)a=day+273;
        if(month==11)a=day+304;
        if(month==12)a=day+334;};
	printf("%d\n",a);
	return 0;
}

