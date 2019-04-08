int main()
{int i,n,a[32]={0},j;
scanf("%d",&n);a[0]=1;
for(j=0;j<n;j++){
for(i=0;i<31;i++){
	a[i]*=2;}
for(i=0;i<31;i++){
	if(a[i]>=10){a[i]-=10;a[i+1]++;}}}
for(i=31;i>=0;i--){
	if(a[i]==0 && a[i-1]!=0)break;}
for(j=i-1;j>=0;j--){printf("%d",a[j]);}


}
