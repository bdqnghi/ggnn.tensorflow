
int getsu1(int getsu)
{
	int b=0;
	switch(getsu)
	{
	case 12:b=b+30;
	case 11:b=b+31;
	case 10:b=b+30;
	case 9:b=b+31;
	case 8:b=b+31;
	case 7:b=b+30;
	case 6:b=b+31;
	case 5:b=b+30;
	case 4:b=b+31;
	case 3:b=b+28;
	case 2:b=b+31;
	case 1:b=b+0;
	}
	return(b);
}	

void shuu(long  unsigned int s)
{	
	switch(s%7)
	{
	case 0:printf("Sat");break;
	case 1:printf("Sun");break;
	case 2:printf("Mon");break;
	case 3:printf("Tue");break;
	case 4:printf("Wed");break;
	case 5:printf("Thu");break;
	case 6:printf("Fri");break;
	
	}printf(".");
}

void main()
{
	 long unsigned int toshi,getsu,hi,l=0,s=0,a,b;
	scanf("%d %d %d",&toshi,&getsu,&hi);
	if(getsu>=3)
	{	l=toshi/4-toshi/100+toshi/400;
		b=toshi%7;
		a=b*365+l;
	}
	else
	{	l=(toshi-1)/4-(toshi-1)/100+(toshi-1)/400;
		b=toshi%7;
		a=b*365+l;
	}
	s=s+a+getsu1(getsu)+hi;
	shuu(s);
    
}
