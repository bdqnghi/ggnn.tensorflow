int main(){
	int n;
	scanf("%d",&n);
	int sz[100][2];
	for(int i=0;i<n;i++){
		scanf("%d",&sz[i][0]);
		scanf("%d",&sz[i][1]);
	}
	int a=0,b=0;
	int sub[100]={0};
	for(int j=0;j<n;j++){
		if(sz[j][0]>=90&&sz[j][0]<=140&&sz[j][1]>=60&&sz[j][1]<=90){
			sub[a]++;
		}
		else
			a++;
	}
	int e;
    for(int k=1;k<a+1;k++){
		for(int m=0;m<a+1-k;m++){
			if(sub[m]<sub[m+1]){
					e =sub[m+1];
					sub[m+1] =sub[m];
					sub[m] = e;
			}
		}
	}
	printf("%d",sub[0]);
    return 0;
}
