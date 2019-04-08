
int main(int argc, char* argv[])
{
int n,i;
scanf("%d",&n);
int sz[100];
for(i=1;i<=n;i++){
	if(i<n){
		scanf("%d ",&sz[i]);
	}else{
		scanf("%d",&sz[i]);
	}
}
for(i=n;i>=1;i--){
    if(i>1){
		printf("%d ",sz[i]);
	}else{
		printf("%d",sz[i]);
	}
}

   return 0;
}

