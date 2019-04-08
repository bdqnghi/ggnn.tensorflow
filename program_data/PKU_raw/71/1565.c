
int main()
{
	int n,i,y,m1,m2,a,b,c;
	scanf("%d", &n);
	for(i=0;i<n;i++){
		a=0;
		scanf("%d%d%d", &y, &m1, &m2);
		if(m1>m2){
			c=m2;
			m2=m1;
			m1=c;}
		if(y%4!=0||(y%100==0&&y%400!=0)){
			for(b=m1;b<m2;b++){
				if(b==1||b==3||b==5||b==7||b==8||b==10||b==12){
					a=a+31;}
				else if(b==2) a=a+28;
				else a=a+30;}
		}
		else{
			for(b=m1;b<m2;b++){
				if(b==1||b==3||b==5||b==7||b==8||b==10||b==12){
					a=a+31;}
				else if(b==2) a=a+29;
				else a=a+30;}
		}
		if (a%7==0) 
			printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}
