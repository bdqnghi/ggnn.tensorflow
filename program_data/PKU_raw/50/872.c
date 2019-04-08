int main()
{
	int a[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	int w,i,i2,day,x;
	scanf("%d",&w);
	for(i=1;i<=12;i++){
		day=0;
		for(i2=0;i2<i;i2++){
			day=day+a[i2];
		}
		x=(day+12+w)%7;
		if(x==5)
			printf("%d\n",i);
	}
}
