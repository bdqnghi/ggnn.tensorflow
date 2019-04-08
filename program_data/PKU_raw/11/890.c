int Runnian(int y);
int main(){
	int y,m,d,count=0;
	int i;
	scanf("%d %d %d",&y,&m,&d);
	for(i=1;i<m;i++){
		if(i==1 || i==3 || i==5 || i==7 || i==8 || i==10 || i==12)
			count+=31;
		else if(i==4 || i==6 || i==9 || i==11)
			count+=30;
		else if(i==2){
			if(Runnian(y))
				count+=29;
			else
				count+=28;
		}
	}
	count+=d;
	printf("%d\n",count);
	return 0;
}
int Runnian(int y){
	int result;
	if(y%400==0 || (y%4==0 && y%100!=0))
		result=1;
	else
		result=0;
	return result;
}
