int main(){
    int a[20001];
    int n,i,j,l,num;
    scanf("%d",&n);
    for(i=1;i<=n;i++){scanf("%d",&a[i]);}
    num=0;
    for(i=1;i<=n;i++){
		for(j=1;j<i;j++){
			if(a[j]==a[i]){
            a[i]=0;
            num++;
            break;
			}
		}
		}
	j=0;
	for(i=1;i<=n;i++){if(a[i]!=0){
		j++;
		if(j!=n-num){
		printf("%d ",a[i]);}
		else{printf("%d",a[i]);
		break;}
	}}
	scanf("%d",&n);
	return 0;
}