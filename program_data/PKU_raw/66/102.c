int run(int y){
	if((y%4 == 0 && y%100 != 0) || y%400==0){
		return 1;
	}
	return 0;
}
void xingqi(int x){
		switch(x){
		case 0:printf("Sun.\n");break;
		case 1:printf("Mon.\n");break;
		case 2:printf("Tue.\n");break;
		case 3:printf("Wed.\n");break;
		case 4:printf("Thu.\n");break;
		case 5:printf("Fri.\n");break;
		case 6:printf("Sat.\n");break;
		}
}

int main(){
	int days[]={0,3,0,3,2,3,2,3,3,2,3,2,3};
	int y,m,d,w,i;
	scanf("%d%d%d",&y,&m,&d);
	w=y%7+(y/4-y/100+y/400)-1;
	w+=d;
	if(run(y)){
		w--;
		days[2]++;
	}
	for(i=1;i<m;i++){
		w+=days[i];
	}
	xingqi(w%7);
	return 0;
}
