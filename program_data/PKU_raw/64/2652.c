int main(){
	int n,i,j,k,t,m,pair;
	double e;
	double sz[10][3],num[45][7];
    scanf("%d",&n);
	pair=n*(n-1)/2;
	for(i=0;i<n;i++){
		for(j=0;j<3;j++){
	    scanf("%lf",&sz[i][j]);
		}
	}
	m=0;
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			for(k=0;k<3;k++){
			num[m][k]=sz[i][k];
			}
			for(t=3;t<6;t++){
			num[m][t]=sz[j][t-3];
			}
			num[m][6]=sqrt((num[m][0]-num[m][3])*(num[m][0]-num[m][3])+(num[m][1]-num[m][4])*(num[m][1]-num[m][4])+(num[m][2]-num[m][5])*(num[m][2]-num[m][5]));
			m++;
		}
	}
	for(k=1;k<=pair;k++){
		for(i=0;i<pair-k;i++){
			if(num[i][6]<num[i+1][6]){
				for(t=0;t<7;t++){
                e=num[i+1][t];
			    num[i+1][t]=num[i][t];
		       	num[i][t]=e;
				}
			}
		}
	}
	for(t=0;t<pair;t++){
	printf("(%.0lf,%.0lf,%.0lf)-(%.0lf,%.0lf,%.0lf)=%.2lf\n",(num[t][0]),(num[t][1]),(num[t][2]),(num[t][3]),(num[t][4]),(num[t][5]),(num[t][6]));
	}
return 0;
}
