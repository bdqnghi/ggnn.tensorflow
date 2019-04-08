int main(){
	int n,y,m1,m2,d;
	scanf("%d",&n);
	int i,t,j;
	for(i=0;i<n;i++){
		scanf("%d%d%d",&y,&m1,&m2);
		d=0;
		if(m1<m2){
			t=m1;m1=m2;m2=t;
		}
        for(j=m2;j<m1;j++){
			if(j==1||j==3||j==5||j==7||j==8||j==10){
				d+=31;
			}else if(j==4||j==6||j==9||j==11){
				d+=30;
			}else{
				if(y%4==0&&y%100!=0||y%400==0){
					d+=29;
				}else{
					d+=28;
				}
			}
		}
		if(d%7==0){
			printf("YES\n");
		}else{
			printf("NO\n");
		}
	}
	return 0;
}