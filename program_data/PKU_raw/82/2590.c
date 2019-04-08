int main(){
	int n,k,ssy[100],szy[100],t[100],cs[100],i,a;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d%d",&ssy[i],&szy[i]);
		if(ssy[i]>=90&&ssy[i]<=140&&szy[i]>=60&&szy[i]<=90){
			t[i]=1;
		}else{
			t[i]=0;
		}
	}
	for(i=0;i<n;i++){
		cs[i]=0;
		if(t[i]==1){
			for(k=i;k<n;k++){
				if(t[k]==1){
					cs[i]++;
				}else{
					break;
				}
			}
		}
	}
	for(i=1;i<=n;i++){
		for(k=0;k<n-i;k++){
			if(cs[k]<cs[k+1]){
				a=cs[k];
				cs[k]=cs[k+1];
				cs[k+1]=a;
			}
		}
	}
	printf("%d",cs[0]);
	return 0;
}