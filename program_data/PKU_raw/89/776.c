int main(){
int n,num,a,ml=0;
int sz[100000][2];
scanf("%d",&n);
for (int i=0;;i++){
	for (int j=0;j<2;j++){
		scanf("%d",&sz[i][j]);
	}
	if (sz[i][0]==0&&sz[i][1]==0){
		break;
	}
}
for (int k=0;k<n;k++){
	num=n-1;
	a=0;
	for (int t=0;;t++){
		if (sz[t][0]==k){
			if(sz[t][1]==0&&sz[t][0]==0){
				break;
			}
			else {
		    a=1;	
			break;
		}
		}
        if (sz[t][1]==k){
			num--;
		}
		if (sz[t][0]==0&&sz[t][1]==0){
			break;
    	}
	}
	if (num==0&&a==0){
		ml=1;
		printf("%d",k);
		break;
	}
}
	if (ml==0){
		printf("NOT FOUND");
	}
return 0;
}