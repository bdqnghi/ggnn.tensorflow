int main(){
	int y1,y2,m1,m2,d1,d2,n1=0,n2=0,n3=0,i,j;
	int mouth1[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	int mouth2[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};
	cin>>y1>>m1>>d1;
	cin>>y2>>m2>>d2;
	for(i=y1;i<y2;i++){
		if((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0))n1+=366;
		else n1+=365;
	}
	if((y2% 4 == 0 && y2 % 100 != 0) || (y2 % 400 == 0))
		for(j=0;j<m2;j++)
			n2+=mouth2[j];
	else
		for(j=0;j<m2;j++)
			n2+=mouth1[j];
	if((y1% 4 == 0 && y1 % 100 != 0) || (y1 % 400 == 0))
			for(j=0;j<m1;j++)
				n2-=mouth2[j];
		else
			for(j=0;j<m1;j++)
				n2-=mouth1[j];
	n3=d2-d1;
	int sum=n1+n2+n3;
	cout<<sum<<endl;
	return 0;
}
