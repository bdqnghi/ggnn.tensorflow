int main(){
int n,k,a;
int i,j;
scanf("%d%d",&n,&k);
int sz[1000],zs[1000];
for(i=0;i<n;i++){
	scanf("%d",&sz[i]);
	zs[i]=sz[i];
}
a=0;
for(i=0;i<n;i++){
	for(j=0;j<n;j++){
		if((zs[j]+sz[i])==k){
			a=1;
			break;
		}
	}
}

if(a==1){
	printf("yes\n");
}
else{
	printf("no\n");
}
return 0;
}