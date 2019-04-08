int main(){
	int y,m,d,sumd=0,X[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	cin>>y>>m>>d;
	while(y>2800)
		y-=2800;
	if(y%4==0&&y%100!=0||y%400==0)
		X[1]++;
	while(y>1){
		y--;
		if(y%4==0&&y%100!=0||y%400==0)
			sumd+=366;
		else
			sumd+=365;
	}
	while(m>1){
		sumd+=X[m-2];
		m--;
	}
	sumd+=d;
	sumd=sumd%7;
	switch(sumd){
		case 0:cout<<"Sun.";break;
		case 1:cout<<"Mon.";break;
		case 2:cout<<"Tue.";break;
		case 3:cout<<"Wed.";break;
		case 4:cout<<"Thu.";break;
		case 5:cout<<"Fri.";break;
		case 6:cout<<"Sat.";break;
	}
	return 0;
}