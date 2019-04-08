
int main()
{
    int year,dm[]={31,28,31,30,31,30,31,31,30,31,30,31},day=0,month=0;	
	scanf("%d%d%d",&year,&month,&day);
    if((year % 400== 0)||(year%4==0&&year%100!=0))
		dm[1]=29;
	int i,m=0,d=0;
	for(i=0;i<month-1;i++)
		d+=dm[i];
	    d+=day;
	printf("%d",d);
	return 0;
}
	    