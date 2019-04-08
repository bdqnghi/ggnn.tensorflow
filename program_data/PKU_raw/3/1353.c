int main(){
int n,k,i,j,a[9999],h,m=0,o=0;
scanf("%d %d",&n,&k);
for(i=0;i<n;i++){
scanf("%d",&a[i]);
}
for(i=0;i<n-1;i++){
	for(j=0;j<n-1;j++){
	h=a[i]+a[j];
	m++;
	if(h==k){o++;}
	}
	}

if(o==0){printf("no");}else{printf("yes");}
return 0;
}