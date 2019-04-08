
int main(){
	int n,i,m,j,mistake[100],k,result[100];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&m);
		result[i]=60;
		for(j=0;j<m;j++){
			scanf("%d",&mistake[j]);
		}
		for(j=0;j<m;j++){
			for(k=0;k<=3;k++){
				if(mistake[j]+3*j+k>=60){
					result[i]-=(k+1);
					break;
				}
			}
			if(result[i]!=60){
				result[i]++;
				break;
			}
		}
		result[i]-=3*j;
	}
	for(i=0;i<n;i++){
		printf("%d\n",result[i]);
	}
	return 0;
}

