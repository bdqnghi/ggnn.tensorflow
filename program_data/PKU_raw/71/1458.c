int main()
{
	int n,i=0,j=0,k=0,m,sum=0;
	int an[200],bn[200],cn[200];
	scanf("%d",&n);
	for(i=0;k<n;i++){
		sum=0;
		scanf("%d %d %d",&an[i],&bn[i],&cn[i]);
		k++;
		if(bn[i]>cn[i]){
			m=bn[i];
			bn[i]=cn[i];
			cn[i]=m;
		}
		for(j=bn[i];j<cn[i];j++){
			if(j==2){
				if((an[i]%400==0||(an[i]%4==0&&an[i]%100!=0))){
					sum+=29;
				}
				else  sum+=28;
			}
			else if(j==1||j==3||j==5||j==7||j==8||j==10||j==12){
				sum+=31;
			}
			else if(j==4||j==6||j==9||j==11){
				sum+=30;
			}
		}
		if(sum%7==0) printf("YES\n");
		else if(sum%7!=0) printf("NO\n");
	}
	return 0;
}
