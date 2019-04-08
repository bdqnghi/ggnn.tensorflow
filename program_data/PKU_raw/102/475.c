int main(){
	double sg[40],male[40],female[40],e;
	char xb[40][7];
	int n,i,j,l,k;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s%lf",xb[i],&sg[i]);
	}
	j=0;
	k=0;
	int result;
	for(i=0;i<n;i++){
		result=strcmp(xb[i],"male");
		if(result==0){
			male[j]=sg[i];
			j++;
		}else{
			female[k]=sg[i];
			k++;
		}
	}
	for(l=1;l<=j;l++){
		for(i=0;i<j-l;i++){
			if(male[i]>male[i+1]){
				e=male[i+1];
				male[i+1]=male[i];
				male[i]=e;
			}
		}
	}
	for(l=1;l<=k;l++){
		for(i=0;i<k-l;i++){
			if(female[i]<female[i+1]){
				e=female[i+1];
				female[i+1]=female[i];
				female[i]=e;
			}	
		}
	}
	for(i=0;i<j;i++){
		printf("%.2lf ",male[i]);
	}
	for(i=0;i<k-1;i++){
		printf("%.2lf ",female[i]);
	}
	printf("%.2lf",female[k-1]);
return 0;
}