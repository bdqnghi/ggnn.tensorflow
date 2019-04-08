int main (){
	int a[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	int y1,y2,m1,m2,d1,d2;
	int ysum=0,msum=0,dsum=0;
	int i;
	cin>>y1>>m1>>d1;
	cin>>y2>>m2>>d2;
	for(i=y1+1;i<y2;i++){
		if(((i%4==0)&&(i%100!=0))||(i%400==0))
			ysum = ysum + 366;
		else ysum = ysum + 365;}
	if(y2-y1==0){
		for(i=m1+1;i<m2;i++){
		if((((y1%4==0)&&(y1%100!=0))||(y1%400==0))&&(i==2))
			msum = msum + 29;
		else msum = msum +a[i];
		}
		if(m1==m2)dsum = d2-d1;
		else {if((((y1%4==0)&&(y1%100!=0))||(y1%400==0))&&(m1==2))
			dsum = dsum + 29 - d1;
		else dsum = dsum + a[m1] - d1;
		dsum = dsum + d2;}
		}
	else {
		for(i=m1+1;i<=12;i++){
			if((((y1%4==0)&&(y1%100!=0))||(y1%400==0))&&(i==2))
						msum = msum + 29;
					else msum = msum +a[i];
		}
		for(i=1;i<m2;i++){
			if((((y2%4==0)&&(y2%100!=0))||(y2%400==0))&&(i==2))
						msum = msum + 29;
					else msum = msum +a[i];
		}
		if((((y1%4==0)&&(y1%100!=0))||(y1%400==0))&&(m1==2))
					dsum = dsum + 29 - d1;
				else dsum = dsum + a[m1] - d1;
				dsum = dsum + d2;
	}
	cout<<dsum+msum+ysum;
	return 0;
}