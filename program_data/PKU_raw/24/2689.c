int main(){
	char max[50],min[50],a[50];
	int n,i;
	scanf("%d",&n);
	scanf("%s",max);
	strcpy(min,max);
	for(i=2;i<=n;i++){
		scanf("%s",a);
		if(strlen(a)>strlen(max)) strcpy(max,a);
		if(strlen(a)<strlen(min)) strcpy(min,a);
	}
	printf("%s\n",max);
	printf("%s\n",min);
	return 0;
}