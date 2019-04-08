int main()
{
	int i,j,M,m,min[120],max[120],n;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		scanf("%d %d",&min[i],&max[i]);
	}
	m=1;
	int jieguo[120]={0};
	for(i=1;i<=n;i++){
		if(min[i]>=90&&min[i]<=140&&max[i]>=60&&max[i]<=90){
			jieguo[m]=1;
			for(j=1;(i+j)<=n;j++){
				if(min[i+j]>=90&&min[i+j]<=140&&max[i+j]>=60&&max[i+j]<=90){
					jieguo[m]++;
				}else{
					break;
				}
			}
			m++;
		}
	}
	M=jieguo[1];
	for(i=2;i<=100;i++){
		if(jieguo[i]>=M){
			M=jieguo[i];
		}else{
			continue;
		}
	}
	printf("%d",M);
	return 0;
}

		
