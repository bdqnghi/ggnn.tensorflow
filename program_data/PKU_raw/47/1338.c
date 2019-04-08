int main()
{
	int n,i=1,s[100],j;
	scanf("%d",&n);
	while(i<=n){
		scanf("%d",&s[i]);
		i++;
	}
	j=n;
	while(j>1){
	     printf("%d ",s[j]);
		 j--;
	}
	printf("%d",s[1]);
	return 0;
}
