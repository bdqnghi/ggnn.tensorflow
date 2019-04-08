
int main(int argc, char* argv[])
{
int n,k,a,h;
int sz[1000];
h=0;
scanf("%d %d",&n,&k);
for(int i=0;i<n;i++){
   scanf("%d ",&sz[i]);
}
for(int j=0;j<n;j++){
	for(int r=0;r<n;r++){
		a=sz[j]+sz[r];
		if(a!=k){
		   h++;
		}
			
	}
}
if(h==n*n){
	printf("no");
}else{
	printf("yes");
}



	return 0;
}
