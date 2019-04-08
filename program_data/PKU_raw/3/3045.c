int main(){
int a[1000];
int n,k,i,j,sum,res;
scanf("%d %d\n",&n,&k);
for(i=0;i<n;i++){
scanf("%d",&a[i]);
}
res=0;
for(i=0;i<n;i++){
	sum=0;
	for(j=0;j<n;j++){
	sum=a[i]+a[j];
	if(sum==k){
		res=res+1;
	}
	}
}
if(res==0){printf("no");}else{printf("yes");}
return 0;
}
