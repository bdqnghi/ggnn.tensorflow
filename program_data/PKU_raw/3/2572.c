int main(){
int n,k,i,sz[1000],a,sa[1000],ye=0;
scanf("%d %d",&n,&k);
for(i=0;i<n;i++){
	scanf("%d",&(sz[i]));
	sa[i]=sz[i];
}
for(i=0;i<n-1;i++){
	for(a=i+1;a<n;a++){
		if(sz[i]+sa[a]==k){
		ye=1;
		break;
		}
	}
	if(ye==1){
		break;
	}
}
if(ye==1){
	printf("yes");
}else{
	printf("no");
}
	return 0;
}