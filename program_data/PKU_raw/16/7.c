int main()
{
	char num[6];
	int i,n,nnum[6],p=0;
	scanf("%s",num);
	n=strlen(num);
	
	for(i=n-1;i>=0;i--){
		nnum[i]=num[i]-48;
		printf("%d",nnum[i]);
	}
	
	return 0;
}

