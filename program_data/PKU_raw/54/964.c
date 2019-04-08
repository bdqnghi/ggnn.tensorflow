int apple(int n,int k);
int main()
{
	int n0,k0,num;
	scanf("%d%d",&n0,&k0);
	num=apple(n0,k0);
	printf("%d",num);
	return 0;
}
int apple(int n,int k)
{
	int i,s,p,t;
	s=0;
	if(n==1) return 1*n+k;
	if(n>=2){
		for(i=1;i<=100000000;i++){
			t=0;
			s=i*n+k;
			for(p=1;p<=n-1;p++){
				if(s%(n-1)==0){
					s=s*n/(n-1)+k;
					t++;
				}else{
					break;
				}
			}
			if(t==n-1){
				break;
			}
		}
		return s;
	}
}