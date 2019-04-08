int main()
{
	int y,m,d,run=0,M[13],i,D;
	scanf("%d%d%d",&y,&m,&d);
	D=d;
	if((y%400==0)||((y%100!=0)&&(y%4==0))){
		run=1;
	}
	else run=0;
	for(i=1;i<13;i++){
		switch(i){
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			M[i]=31;
			break;
		default:
			M[i]=30;
		}
	}
	if(run==1){
		M[2]=29;
	}
	else M[2]=28;
	for(i=1;i<m;i++){
		D=D+M[i];
	}
	printf("%d",D);
	return 0;
}