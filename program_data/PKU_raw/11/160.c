int main()
{
	int year,mon,day,a;
	scanf("%d%d%d",&year,&mon,&day);
	    if(mon==1)
			a=day;
		else if(mon==2)
			a=31+day;
		else if(mon==3)
			a=59+day;
		else if(mon==4)
			a=90+day;
		else if(mon==5)
			a=120+day;
		else if(mon==6)
			a=151+day;
        else if(mon==7)
			a=181+day;
        else if(mon==8)
			a=212+day;
        else if(mon==9)
			a=243+day;
		else if(mon==10)
			a=273+day;
		else if(mon==11)
			a=304+day;
		else 
			a=334+day;
		if((year % 4 == 0 && year % 100 !=0 ) || year % 400 == 0)
		{
			if(mon>=3)
				a=a+1;
		}
		printf("%d\n",a);
		return 0;
}
