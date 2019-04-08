int main()
{
	int a[300],b[300];
	int n;
	int i;
	int x=0,y=0;
	cin>>n;
	for(i=0 ; i<n ; i++){
		cin>>a[i]>>b[i];
        if(a[i]==0 && b[i]==1)
			x++;
		else if(a[i]==1 && b[i]==2)
			x++;
		else if(a[i]==2 && b[i]==0)
			x++;
		else if(a[i]!=b[i])
			y++;
	}
	if(x>y)
		cout<<"A";
	else if(x==y)
		cout<<"Tie";
	else 
		cout<<"B";
	return 0;
}