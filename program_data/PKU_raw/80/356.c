int judge(int x){
	if(x%400==0||(x%4==0&&x%100!=0))
		return 1;
	return 0;
}
int main(){
	int y1,m1,d1,y2,m2,d2;
	cin>>y1>>m1>>d1;
	cin>>y2>>m2>>d2;
	int sum=0,n=0;
	int a[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	for(int i=y1+1;i<y2;i++){
		if(judge(i))n++;
	}
	if(y1==y2&&m1==m2&&d1==d2)sum=0;
	else if(y1==y2&&m1==m2)sum=d2-d1;
	else if(y1==y2){
		for(int i=m1+1;i<m2;i++)
			sum=sum+a[i];
		sum=sum+a[m1]-d1+d2;
		if(judge(y1)&&(m1<=2)&&(m2>2))sum++;
	}
	else if(y1!=y2){
		for(int i=m1+1;i<=12;i++)
			sum=sum+a[i];
		for(int i=1;i<m2;i++)
			sum=sum+a[i];
		sum=sum+a[m1]-d1+d2;
		if(judge(y1)&&m1<=2)sum++;
		if(judge(y2)&&m2>2)sum++;
		sum=sum+365*(y2-y1-1)+n;
	}
	cout<<sum<<endl;
	return 0;
}
