int main(){
int n,k,i,j,a[1000];
scanf("%d%d",&n,&k);
for(i=0;i<n;i++){
    scanf("%d",&a[i]);
}
for(i=0;i<n-1;i++){
    for(j=i+1;j<n;j++){
		if(a[i]+a[j]==k){
		printf("yes");
		return 0;
		}
		else 
			continue;
	}
}
if(i==n-1){
	printf("no");}
return 0;

}