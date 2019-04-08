int main()
{
	int i,j,k=0;
	int sz[16],erbei[16],sum=0;
	for(i=0;;i++){
		scanf("%d",&sz[i]);
		if(0==sz[i]){
			for(j=0;j<i;j++){
				erbei[k]=2*sz[j];
				k++;
			}
			for(k=0;k<i;k++){
				for(j=0;j<i;j++){
					if(erbei[k]==sz[j]){
						sum++;
					}
				}
			}
			printf("%d\n",sum);
			sum=0;
			i=-1;
			k=0;
		}
		if(-1==sz[i]){
			break;
		}
	}
	return 0;
}