int main(){
	int a,n,i,j,mid,result;
	n=0;
	i=0;
	j=0;
	mid=0;
	a=0;
	result=0;
	int line1[100],line2[100],minus[100];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d %d",&line1[i],&line2[i]);
	}
	for(i=1;i<=n;i++){
		for(j=0;j<n-i;j++){
			if(line1[j]>line1[j+1]){
				mid=line1[j];
				line1[j]=line1[j+1];
				line1[j+1]=mid;
				mid=line2[j];
				line2[j]=line2[j+1];
				line2[j+1]=mid;
			}
			if(line1[j]==line1[j+1]){
				if(line2[j]>line2[j+1]){
					mid=line2[j];
					line2[j]=line2[j+1];
					line2[j+1]=mid;
				}
			}
		}
	}
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if((line2[i]>=line1[j])&&(line2[i]<=line2[j])){
				line2[i]=line2[j];
			}
		}
	}
	for(i=0;i<n;i++){
		minus[i]=line2[i]-line1[i];
	}
	for(i=0;i<n;i++){
		if(minus[i]>mid){
			mid=minus[i];
		}
	}
	//for(i=0;i<n;i++){
	//	printf("\n");
	//	printf("%d",minus[i]);
	//}
	for(i=0;i<n;i++){
		if(mid==minus[i]){
			result=i;
		}
	}
	//for(i=0;i<n;i++){
	//	printf("%d ",line1[i]);
	//	printf("%d ",line2[i]);
	//	printf("\n");
	//}
//	printf("\n%d %d",line1[result],line2[result]);
	for(i=0;i<n;i++){
//		printf("\n%d %d",line1[i],line2[i]);
		if((line1[result]<=line1[i])&&(line2[result]>=line2[i])){
			a++;
		}else{
			printf("no");
			break;
		}
	}
	if(a==n){
		printf("\n%d %d",line1[result],line2[result]);
	}
	return 0;
}