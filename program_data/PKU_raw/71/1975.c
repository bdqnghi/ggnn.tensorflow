int run(int q){
	if(q%3200==0){
		return 0;
	}else if(q%400!=0&&q%100==0){
		return 0;
	}else if(q%4==0){
		return 1;
	}else{
		return 0;
	}
}
int main()
{
	int i,j,year,a,b,n,x;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
	scanf("%d %d %d",&year,&a,&b);
	int month[13];
	month[2]=28+run(year);
	month[1]=31;
	month[3]=31;
	month[5]=31;
	month[7]=31;
	month[8]=31;
	month[10]=31;
	month[12]=31;
	month[4]=30;
	month[6]=30;
	month[9]=30;
	month[11]=30;
	if(a>b){
		j=b;
		b=a;
		a=j;
	}
	x=0;
	for(j=a;j<b;j++){
		x+=month[j];
	}
	if(x%7==0){
		printf("YES\n");
	}else{
		printf("NO\n");
	}
	}
	return 0;
}
