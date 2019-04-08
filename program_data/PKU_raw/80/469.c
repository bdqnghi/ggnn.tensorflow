int main(){
	int y1,y2,m1,m2,d1,d2;
	cin>>y1>>m1>>d1>>y2>>m2>>d2;
	int mon[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	int sum=0;
	sum+=d2-d1;
	if(m2>=m1){
		for(int i=0;i<12;i++)
			if((i+1>=m1)&&(i+1<m2))sum+=mon[i];
	}
	else {
		for(int i=0;i<12;i++)
			if(i+1>=m2&&i+1<m1)sum-=mon[i];
	}
	sum+=(y2-y1)*365;
	for(int i=y1;i<=y2;i++)
		if((i%4==0&&i%100!=0)||(i%400==0))sum++;
	if(((y1%4==0&&y1%100!=0)||(y1%400==0))&&m1>2)sum--;
	if(((y2%4==0&&y2%100!=0)||(y2%400==0))&&m2<=2)sum--;
	cout<<sum<<endl;
	return 0;
}