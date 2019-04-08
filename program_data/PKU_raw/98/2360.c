int main(){
    int n,i,k=0,M=-1,j;
	char a[1000][100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%s",a[i]);
	while(1){
		for(j=k;j<n;j++){
			M+=strlen(a[j])+1;
			if(j==k)
				printf("%s",a[j]);
			else if(M<81)
				printf(" %s",a[j]);
			else{
				printf("\n");
				M=-1;
				k=j;
				break;
			}
		}
		if(j==n)
			break;
	}
	return 0;
}