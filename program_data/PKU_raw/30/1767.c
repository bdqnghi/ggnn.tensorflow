int main()
{
	int j,n,s=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		if(i%7==0){
			continue;
		}
		if(i%10==7){
			continue;
		}
		j=i;
		j=j/10;
		if(j%10==7){
			continue;
		}
		s+=i*i;

	}
	printf("%d",s);
	return 0;
}