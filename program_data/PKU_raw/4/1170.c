int main()
{
	int a[10000];
	int m,n;
	cin>>m>>n;
	int i;
	for(i=0;i<m*n;i++){
		cin>>a[i];
	}
	int *p;//????
	int temp;//?????
	temp=0;
	int num=m+n-1;
	while(num--){
		p=a+temp;//????
		i=temp;//??????????
		while(i%n!=0&&i/n!=m-1){
			cout<<*p<<endl;
		    p=p+(n-1);
		    i+=(n-1);
		}
		cout<<*p<<endl;
		if(temp<n-1){
			temp++;
		}
		else{
			temp+=n;
		}
	}
	return 0;
}