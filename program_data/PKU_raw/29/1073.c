int main(){
	int m,i,j,max;
	scanf("%d",&m);
	int*sz_1=(int*)malloc(sizeof(int)*m);
	for(i=0;i<m;i++){
		scanf("%d",&(sz_1[i]));}
	max=0;
	for(i=0;i<m;i++){
		if(sz_1[i]>max){
			max=sz_1[i];
		}
	}
	int*sz_2=(int*)malloc(sizeof(int)*(max+1));
	sz_2[0]=1;
	sz_2[1]=2;
	for(i=2;i<=max;i++){
		sz_2[i]=sz_2[i-1]+sz_2[i-2];
	}
	double*sz_3=(double*)malloc(sizeof(double)*m);
	for(i=0;i<m;i++) sz_3[i]=0;
	for(i=0;i<m;i++){
		for(j=0;j<sz_1[i];j++){
		    sz_3[i]+=1.0*sz_2[j+1]/sz_2[j];
		}
	}
	for(i=0;i<m;i++) printf("%.3lf\n",sz_3[i]);
	free(sz_1);
	free(sz_2);
	free(sz_3);
	return 0;
}