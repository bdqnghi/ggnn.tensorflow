int main()
{
	int n,a[20000], i, j, flag, g;
	cin>>n;
	g = 0;
	for(i=0;i<n;i++) {
		cin>>a[i];
		flag = 1;
		for (j=0; j<i; j++)
			if (a[j]==a[i]) { flag = 0; break; }//??a[i]????????????????flag
			if (flag==1) 
				if (g) {
					cout<<" "<<a[i];//???????a[i]
				} else { cout<<a[i]; g=1;}
	}
	cout<<endl;
	return 0;
}
