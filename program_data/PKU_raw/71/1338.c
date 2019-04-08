int main()
{
	int i,n,year[200],m1[200],m2[200],run=0,sum[200]={0},j,k,t,s;
  scanf("%d",&n);
for(i=0;i<n;i++)
{
	scanf("%d%d%d",&year[i],&m1[i],&m2[i]);}
for(i=0;i<n;i++){
	run=0;
	if(year[i]%400 == 0 ||(year[i]%4==0 && year[i]%100!=0)){
		run=1;}
	if(run==0){
		if(m1[i]>m2[i]){
			for(j=m2[i];j>=m2[i]&&j<m1[i];j++){
			if(j==1||j==3||j==5||j==7||j==8||j==10||j==12){
				sum[i]+=31;
			}
			else if(j==4||j==6||j==9||j==11){
				sum[i]+=30;}
				else if(j==2){
					sum[i]+=28;}
			}
		}
			else if(m2[i]>m1[i]){
					for(k=m1[i];k>=m1[i]&&k<m2[i];k++){
			if(k==1||k==3||k==5||k==7||k==8||k==10||k==12){
				sum[i]+=31;
			}
			else if(k==4||k==6||k==9||k==11){
				sum[i]+=30;}
				else if(k==2){
					sum[i]+=28;}
					}
				}
				}
				else if(run==1){
						if(m1[i]
							>m2[i])
						{
		     	for(t=m2[i];t>=m2[i]&&t<m1[i];t++){
			if(t==1||t==3||t==5||t==7||t==8||t==10||t==12){
				sum[i]+=31;
			}
			else if(t==4||t==6||t==9||t==11){
				sum[i]+=30;}
				else if(t==2){
					sum[i]+=29;}
			}
						}
			else if(m2[i]>m1[i]){
					for(s=m1[i];s>=m1[i]&&s<m2[i];s++){
			if(s==1||s==3||s==5||s==7||s==8||s==10||s==12){
				sum[i]+=31;
			}
			else if(s==4||s==6||s==9||s==11){
				sum[i]+=30;}
				else if(s==2){
					sum[i]+=29;}
				}
				}
					}
							
	}
for(i=0;i<n;i++){
	if(sum[i]%7==0){
					printf("YES\n");
				}
				else if(sum[i]%7!=0){
					printf("NO\n");
				}
}

return 0;
					}