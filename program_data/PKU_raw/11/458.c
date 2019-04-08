int main(int argc, char* argv[])
{
	int year,month,day,date;
	int a,b,c,e,g,h,j;
	int d,f,i,k;

    a=c=e=g=h=j=31;
    d=f=i=k=30;

	scanf("%d%d%d",&year,&month,&date);

	if((year%4!=0)||(year%100==0&&year%400!=0))
		b=28;
	else
		b=29;

	switch(month){
	case 1:day=date;break;
	case 2:day=a+date;break;
	case 3:day=a+b+date;break;
	case 4:day=a+b+c+date;break;
	case 5:day=a+b+c+d+date;break;
	case 6:day=a+b+c+d+e+date;break;
	case 7:day=a+b+c+d+e+f+date;break;
	case 8:day=a+b+c+d+e+f+g+date;break;
	case 9:day=a+b+c+d+e+f+g+h+date;break;
	case 10:day=a+b+c+d+e+f+g+h+i+date;break;
	case 11:day=a+b+c+d+e+f+g+h+i+j+date;break;
	case 12:day=a+b+c+d+e+f+g+h+i+j+k+date;break;}

	printf("%d\n",day);
	return 0;
}

