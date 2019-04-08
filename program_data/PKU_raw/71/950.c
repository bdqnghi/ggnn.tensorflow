
int main(){
	int days[]={ 0,31,28,31,30,31,30,31,31,30,31,30,31 };
	int n;
	int i,j;
	int y[201],m[201],d[201];	
	int sum=0;
	scanf("%d",&n);
	for (i=0;i<n;i++){
		scanf("%d %d %d",&y[i],&m[i],&d[i]);
	}
	for (i=0;i<n;i++){
		sum=0;
		if ((y[i]%4==0&&y[i]%100!=0)||(y[i]%400==0)){
				days[2]=29;
		}
		else {
			days[2]=28;
		}
		if (m[i]<d[i]){			
			for(j=m[i];j<d[i];j++){
				sum=sum+days[j];
			}
			if (sum%7==0){
				printf("YES\n");
			}
			else{
				printf("NO\n");
			}
		}
		else if (m[i]>d[i]){
			for(j=d[i];j<m[i];j++){
				sum=sum+days[j];
			}
			if (sum%7==0){
				printf("YES\n");
			}
			else{
				printf("NO\n");
			}
		}
	}
	return 0;
}