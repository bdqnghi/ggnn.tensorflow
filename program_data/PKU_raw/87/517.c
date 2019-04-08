int main(){
	int i,j,n,sum1,sum2,sum;
	int sz[6],peo[1000];
	for(i=0;i<1000;i++){
		for(j=0;j<6;j++){
			scanf("%d",&sz[j]);
		}
		if(sz[0]==0){
			n=i;
			break;
		}
		sum1=(12-sz[0])*3600-(sz[1]*60)-sz[2];
		sum2=sz[3]*3600+sz[4]*60+sz[5];
		sum=sum1+sum2;
		peo[i]=sum;
	}
	for(i=0;i<n;i++){
		printf("%d\n",peo[i]);
	}
	return 0;
}




		