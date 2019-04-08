int main()
{
 	char zfc[41][10];
 	double sz[41],male[41],female[41],final[41];
 	double e;
	int n,i,k,num1=0,num2=0;
 	scanf("%d",&n);
 	for(i=0;i<n;i++){
		scanf("%s %lf",zfc[i],&sz[i]);
		if(strcmp(zfc[i],"male")==0){
			male[num1]=sz[i];
			num1++;
			}
		else{
			female[num2]=sz[i];
			num2++;
			}
		}
	for(k=1;k<=num1;k++){
		for(i=0;i<num1-k;i++){
			if(male[i]>male[i+1]){
				e=male[i+1];
				male[i+1]=male[i];
				male[i]=e;
				}
			}
		}
	for(k=1;k<=num2;k++){
		for(i=0;i<num2-k;i++){
			if(female[i]>female[i+1]){
				e=female[i+1];
				female[i+1]=female[i];
				female[i]=e;
				}
			}
		}
	for(i=0;i<num1;i++){
		final[i]=male[i];
		}
	for(i=0;i<num2;i++){
		final[n-1-i]=female[i];
		}
	for(i=0;i<n;i++){
		if(i<n-1) printf("%.2lf ",final[i]);
		else printf("%.2lf",final[i]);
		}
 	
    return 0;
}