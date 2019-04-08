int main(){
	int n,i;
	int year,mon1,mon2;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d%d%d",&year,&mon1,&mon2);
		if((year%100!=0&&year%4==0)||(year%100==0&&year%400==0))/*runnian*/{
			if(mon1>mon2){
				int t;
				t=mon1;
				mon1=mon2;
				mon2=t;
			}
			int days=0,j;
			int m;
			m=mon1;
			for(j=0;j<mon2-mon1;j++){
				if(m==1||m==3||m==5||m==7||m==8||m==10){
					days=days+31;
				}
				else if(m==2){
					days=days+29;
				}
				else{
					days=days+30;
				}
				m=m+1;
			}
			if(days%7==0){
				printf("YES\n");
			}
			else{
				printf("NO\n");
			}
		}
		else{
if(mon1>mon2){
				int t;
				t=mon1;
				mon1=mon2;
				mon2=t;
			}
			int days=0,j;
			int m;
			m=mon1;
			for(j=0;j<mon2-mon1;j++){
				if(m==1||m==3||m==5||m==7||m==8||m==10){
					days=days+31;
				}
				else if(m==2){
					days=days+28;
				}
				else{
					days=days+30;
				}
				m=m+1;
			}
			if(days%7==0){
				printf("YES\n");
			}
			else{
				printf("NO\n");
			}
		}
	}
		return 0;
	}



