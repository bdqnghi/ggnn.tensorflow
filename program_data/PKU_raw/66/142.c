int rn(int year);
int dn(int year,int month,int day);
int rns(int year);

int rns(int year){
	int x;
	x=year/100*24+(year%100)/4+year/400;
	return x;
}

int main(){
	int y,m,d;
	int xq;
	int daysum;
	cin>>y>>m>>d;
	//rns=0;
	//for(i=1;i<y;i++) {if(rn(i)==1) rns++;}
	daysum=((y-1)*(365%7))%7+rns(y-1)+dn(y,m,d);
	xq=daysum%7;

	switch(xq){
	case 0: cout<<"Sun."; break;
	case 1: cout<<"Mon."; break;
	case 2: cout<<"Tue."; break;
	case 3: cout<<"Wed."; break;
	case 4: cout<<"Thu."; break;
	case 5: cout<<"Fri."; break;
	case 6: cout<<"Sat.";break;
	default:;}
	return 0;
}




int dn(int year,int month,int day){			//  ????????????
	int a[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    int i ,sum;
	sum=0;
	for(i=0;i<(month-1);i++) sum+=a[i];
	sum+=day;
	if (rn(year)==1&&month>=3) sum+=1;
	return sum;
}


int rn(int year){                             //?????????? 1?true 0?false
	if(year%4==0&&year%100!=0) return 1;
	if(year%100==0&&year%400==0) return 1;
	return 0;
}