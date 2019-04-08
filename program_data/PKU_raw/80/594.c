int main()
{
	int di(int x,int y,int z);
	int a,b,c,d,e,f,day1,day2,sum=0,i;
	scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
	for(i=a;i<d;i++){
		if((i%4==0&&i%100!=0)||(i%400==0)){
			sum+=366;
		}
		else
			sum+=365;
	}
	day1=di(a,b,c);
	day2=di(d,e,f);
	sum=sum+day2-day1;
	printf("%d",sum);
	return 0;
}
int di(int x,int y,int z){
	int day[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	int wei,j;
	if((x%4==0&&x%100!=0)||(x%400==0)){
		day[2]++;
	}
	wei=z;
	for(j=1;j<y;j++){
		wei+=day[j];
	}
	return wei;
}