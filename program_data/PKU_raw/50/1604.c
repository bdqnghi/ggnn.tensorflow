int num(int a);
int main()
{
	int w,i,m,day;
	scanf("%d",&w);
	for(i=1;i<=12;i++){
	day=0;
	m=1;
	while(i>m){
	day+=num(m);
	m++;
	}
	day=day+12;
	if((w+day%7)%7==5){
	printf("%d\n",i);
	}
	}
	return 0;
}
int num(int a){
	int b;
	if(a==1||a==3||a==5||a==7||a==8||a==10||a==12)
		b=31;
	if(a==4||a==6||a==9||a==11)
		b=30;
	if(a==2)
		b=28;
	return b;
}