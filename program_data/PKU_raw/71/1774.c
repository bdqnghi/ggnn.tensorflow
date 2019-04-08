int main(){
	int n,i,k,y,m1,m2,m,d=0;
	scanf("%d",&n);
	for(k=0;k<n;k++){
		scanf("%d %d %d",&y,&m1,&m2);
		if(m1>m2){
			m=m1;
			m1=m2;
			m2=m;
		}
		if((y%4==0&&y%100!=0)||y%400==0){
		    for(i=m1;i<m2;i++){
			    if(i==1||i==3||i==5||i==7||i==8||i==10||i==12){
				    d+=31;
				}else if(i==4||i==6||i==9||i==11){
				    d+=30;
				}else if(i==2){
				    d+=29;
				}
			}
		}else{
			for(i=m1;i<m2;i++){
			    if(i==1||i==3||i==5||i==7||i==8||i==10||i==12){
				    d+=31;
				}else if(i==4||i==6||i==9||i==11){
				    d+=30;
				}else if(i==2){
				    d+=28;
				}
			}
		}
		if(d%7==0){
			printf("YES\n");
		}else{
			printf("NO\n");
		}
		d=0;
	}
	return 0;
}