int main(){
	char a[1005],t;
	int n,i;
	cin>>a;
	i=0;
	if(a[i]>='A'&&a[i]<='Z')
		t=a[i]; 
	else t=a[i]-32;
	n=1;
	for(int i=1;a[i]!=0;i++)
	{
		if(a[i]!=t&&a[i]-32!=t) {
			cout<<'('<<t<<','<<n<<')';
			if(a[i]>='A'&&a[i]<='Z')
				t=a[i]; 
			else t=a[i]-32;
			n=1;
		}
		else n++;
	}
	cout<<'('<<t<<','<<n<<')';
	return 0;
}