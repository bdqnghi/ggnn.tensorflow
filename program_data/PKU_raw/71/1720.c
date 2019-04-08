int main(int argc, char* argv[])
{
	int year,m1,m2,date=1,n,x,day,day2;
	int a,b,c,e,g,h,j;
	int d,f,i,k;

    a=c=e=g=h=j=31;
    d=f=i=k=30;
    scanf("%d",&n);
	for(x=0;x<n;x++)
	{
	scanf("%d%d%d",&year,&m1,&m2);

	if((year%4!=0)||(year%100==0&&year%400!=0))
		b=28;
	else
		b=29;
   
	switch(m1){
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

	switch(m2){
	case 1:day2=date;break;
	case 2:day2=a+date;break;
	case 3:day2=a+b+date;break;
	case 4:day2=a+b+c+date;break;
	case 5:day2=a+b+c+d+date;break;
	case 6:day2=a+b+c+d+e+date;break;
	case 7:day2=a+b+c+d+e+f+date;break;
	case 8:day2=a+b+c+d+e+f+g+date;break;
	case 9:day2=a+b+c+d+e+f+g+h+date;break;
	case 10:day2=a+b+c+d+e+f+g+h+i+date;break;
	case 11:day2=a+b+c+d+e+f+g+h+i+j+date;break;
	case 12:day2=a+b+c+d+e+f+g+h+i+j+k+date;break;}

	if((day-day2)%7==0)
	printf("YES\n");
	else
	printf("NO\n");}
	return 0;
}

