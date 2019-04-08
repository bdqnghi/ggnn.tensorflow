void paixu(int n,int a[1000]){
	if(n==0) return;
	int x,i;
	int min=a[0];
	for(x=0;x<n;x++){
		if(a[x]<=min)
			min=a[x];
	}
	if(n>1)
	cout<<min<<' ';
	if(n==1)
		cout<<min;
	for(x=0;x<n;x++){
		if(a[x]==min)
			break;
	}
	for(i=x;i<n-1;i++)
		a[i]=a[i+1];
	return paixu(n-1,a);
}
int main(){
	int m1,m2,x;
	int s[1000];
	memset(s,0,sizeof(s));
	cin>>m1>>m2;
	for(x=0;x<m1;x++)
		cin>>s[x];
	paixu(m1,s);
	cout<<' ';
	memset(s,0,sizeof(s));
	for(x=0;x<m2;x++)
		cin>>s[x];
	paixu(m2,s);
	return 0;
}
