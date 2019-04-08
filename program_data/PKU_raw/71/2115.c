
int main(){
	int n,i,j;
	scanf("%d",&n);
	int days[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	for(i=0;i<n;i++){
		int y,m1,m2;
		int cha=0;
		scanf("%d%d%d",&y,&m1,&m2);
		if((y%4==0&&y%100!=0)||(y%400==0)){
			if((m1<3)&&(m2>=3)){
				for(j=m1;j<m2;j++){
					cha+=days[j];
				}
				cha++;
			}
			else if((m2<3)&&(m1>=3)){
				for(j=m2;j<m1;j++){
					cha+=days[j];
				}
				cha++;
			}
			else if(m2>m1){
				for(j=m1;j<m2;j++){
					cha+=days[j];
				}
			}
			else if(m1>m2){
				for(j=m2;j<m1;j++){
					cha+=days[j];
				}
			}
		}
		else{
			if(m2>m1){
				for(j=m1;j<m2;j++){
					cha+=days[j];
				}
			}
			else{
				for(j=m2;j<m1;j++){
					cha+=days[j];
				}
			}
		}
		if(cha%7==0){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
	return 0;
}