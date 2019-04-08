int n,k,b=1;
int calc(int x){
	if(x==1)return b*n+k;
	if(calc(x-1)==0||calc(x-1)%(n-1)!=0)return 0;
	return calc(x-1)/(n-1)*n+k;
}
int main()
{
	cin>>n>>k;
	while(1){
		if(calc(n)==0){
			b++;
			continue;
		}
		cout<<calc(n);
		break;
	}
	return 0;
}