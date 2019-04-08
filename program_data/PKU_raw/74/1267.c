int chengfang(int n)
{
	int i,ans=1;
	for(i=1;i<=n;i++)ans*=10;
	return ans;
}

int ws(int n)
{
	int i;
	for(i=1;i<32;i++)
		if(n/chengfang(i)==0)
		{
			return i;
			break;
		}
}

int sushu(int n)
{
	int i,ans=1;
	for(i=2;i<=sqrt(n);i++){
		if(n%i==0){
			ans=0;
		}
	}
	return ans;
}

int huiwen(int n)
{
	int i,t=ws(n),ans=1;
	for(i=1;i<=t/2;i++){
		if(n/chengfang(i-1)%10!=n/chengfang(t-i)%10)
			ans=0;
	}
	return ans;
}

int main()
{
	int n,m,i,t=0;
	scanf("%d%d",&n,&m);
	for(i=n;i<=m;i++){
		if(sushu(i)==1){
			if(huiwen(i)==1){
				printf("%d",i);
				t=i;
				break;
			}
		}
	}
	if(t==0)printf("no");
	else {
	for(i=t+1;i<=m;i++){
		if(sushu(i)==1){
			if(huiwen(i)==1){
				printf(",%d",i);
			}
		}
	}
	}
	return 0;
}