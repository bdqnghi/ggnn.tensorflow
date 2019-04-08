void dayprint(int a){
	switch(a){
	case 1:printf("Mon.");break;
    case 2:printf("Tue.");break;
    case 3:printf("Wed.");break;
    case 4:printf("Thu.");break;
    case 5:printf("Fri.");break;
    case 6:printf("Sat.");break;
    case 7:printf("Sun.");break;
	}
}
int main()
{
	int y,m,d,i,a,sum;
	int days[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	scanf("%d %d %d",&y,&m,&d);
	sum=y%7+y/4-y/100+y/400;
	if(y%400==0||(y%4==0&&y%100!=0)){
		days[1]=29;
        sum--;
	}
	
	for(i=1;i<m;i++){
		sum+=days[i-1];
	}
	sum+=d-1;
	if(sum%7==0) a=7;
	else a=sum%7;
	dayprint(a);
	return 0;
}
