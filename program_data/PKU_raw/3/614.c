int main(){
int i,n,k;
scanf("%d %d",&n,&k);
int sz[1000];
for(i=0;i<n;i++){
	scanf("%d",&sz[i]);
}
int j;
for(i=0;i<n;i++){
	
	for(j=0;j<n;j++){
		if((sz[i]+sz[j])==k){
		printf("yes");

	break;
	}

	
}

		if((sz[i]+sz[j])==k){
		break;}

	}

int a=i,b=j;
if((a==n)&&(b==n)&&(sz[n-1]+sz[n-1]!=k)){
printf("no");
}	


	return 0;
}
