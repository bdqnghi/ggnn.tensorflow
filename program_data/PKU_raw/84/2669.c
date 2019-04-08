int main(){
int n;
int e;
int i;
int sz[100];
scanf("%d",&n);
for(i=0;i<n;i++){
	scanf("%d",&(sz[i]));
}
if(n==2){
	if(sz[0]<sz[1]){
		e=sz[1];
		sz[1]=sz[0];
		sz[0]=e;
	}
}
	for(i=2;i<n;i++){
		if(sz[0]<sz[1]){
		e=sz[1];
		sz[1]=sz[0];
		sz[0]=e;
		}
		if(sz[i]>sz[0]){
			e=sz[0];
			sz[0]=sz[i];
			sz[1]=e;
		}else if((sz[0]>sz[i])&&(sz[i]>sz[1])){
			sz[1]=sz[i];
		}
	}
printf("%d\n%d\n",sz[0],sz[1]);
return 0;
	}
	