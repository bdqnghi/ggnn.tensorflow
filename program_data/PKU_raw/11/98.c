int main(int argc, char* argv[])
{
	int year,month,day,n,mday=0,i=1;
    int p[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	scanf("%d %d %d\n",&year,&month,&day);
    for(i=1;i<month+1;i++){
			mday=mday+p[i-1];
	   }
	if((year%4==0&&year%100!=0)||year%400==0){
		if(month>=3){
			mday=mday+1;}
		else {
			mday=mday;
		}
	}
	n=mday+day;
	printf("%d",n);
	return 0;
}
