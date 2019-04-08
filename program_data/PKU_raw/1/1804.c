int dividemin(int a,int minyinzi){
	int num=0;
	if(a==1)num++;
	else for(int i=minyinzi;i<=a;i++)
	{
		if(a%i==0)num=num+dividemin(a/i,i);
	}
	return num;
}
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<=n-1;i++)
		cin>>a[i];
	for(int i=0;i<=n-1;i++)
		//cout<<divide(a[i],a[i])<<endl;
		cout<<dividemin(a[i],2)<<endl;




}