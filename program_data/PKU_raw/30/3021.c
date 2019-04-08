int main()
{
	int n;
	scanf("%d",&n);
	int a=0;
	int c=0;
	int sz[100];
	for(a=0;a<=n;a++){
		if(a%10!=7&&a%7!=0&&a/10!=7){
			sz[a]=(int)pow(a,2);
			c+=sz[a];}
	}
	printf("%d",c);
	return 0;
}