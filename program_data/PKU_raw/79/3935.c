int main(){
	int m[300],n[300],k,i,j,monkey[300],luckymonkey[300],c,t,a;
	k=0;
	while(1){
        scanf("%d %d",&n[k],&m[k]);
		if(m[k]==0&&n[k]==0){
			break;
		}
		k++;
	}
	k--;
	for(i=0;i<=k;i++){
		c=-1;
		t=0;
		for(j=0;j<n[i];j++){
			monkey[j]=1;
		}
		for(j=0;j<(n[i]-1);j++){
			for(a=1;a<=m[i];a++){
				c++;
				t=c%n[i];
				while(monkey[t]==0){
					c++;
					t=c%n[i];
				}
			}
			monkey[t]=0;
		}
		for(j=0;j<n[i];j++){
			if(monkey[j]==1){
				luckymonkey[i]=j+1;
			}
		}
	}
	for(i=0;i<=k;i++){
		printf("%d\n",luckymonkey[i]);
	}
	return 0;
}