
int main(int argc, char* argv[])
{
	int year,month,day;
	scanf("%d%d%d",&year,&month,&day);
	if(year%4!=0||(year%100==0&&year%400!=0))
	{if (month==1)
		printf("%d",day);
	else if(month==2)
		printf("%d",day+31);
    else if(month==3)
	    printf("%d",day+59);
	else if(month==4)
		printf("%d",day+90);
    else if(month==5)
		printf("%d",day+120);
    else if(month==6)
	    printf("%d",day+151);
	else if(month==7)
		printf("%d",day+181);
    else if(month==8)
		printf("%d",day+212);
    else if(month==9)
	    printf("%d",day+242);
	else if(month==10)
		printf("%d",day+273);
    else if(month==11)
		printf("%d",day+304);
    else if(month==12)
		printf("%d",day+334);
}
	else 
{if (month==1)
		printf("%d",day);
	else if(month==2)
		printf("%d",day+31);
    else if(month==3)
	    printf("%d",day+59+1);
	else if(month==4)
		printf("%d",day+90+1);
    else if(month==5)
		printf("%d",day+120+1);
    else if(month==6)
	    printf("%d",day+151+1);
	else if(month==7)
		printf("%d",day+182);
    else if(month==8)
		printf("%d",day+213);
    else if(month==9)
	    printf("%d",day+243);
	else if(month==10)
		printf("%d",day+274);
    else if(month==11)
		printf("%d",day+305);
    else if(month==12)
		printf("%d",day+335);
}

	
	return 0;
}

