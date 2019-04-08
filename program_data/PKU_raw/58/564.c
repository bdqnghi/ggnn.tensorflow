int main ()
{
	int n, i, flag=0,j;
	char a[81];
	cin >> n;
	cin.get();
	for (i = 1;i <= n;i++)
	{
        flag=0;
		cin.getline(a,81);
		for(j=1;a[j]!='\0';j++)
			if((a[j] < '0' ||( a[j]>'9' && a[j]<'A')||(a[j]>'Z'&&a[j]<'a')||(a[j]>'z')) && a[j]!='_' ) {flag=1; break;}
		if(flag==0)   
		{
	    	if((a[0] >= 'a' && a[0] <= 'z') || (a[0] >='A' && a[0] <='Z') || (a[0] == '_'))
		    	cout << "1" <<endl;
	    	else  cout << "0" <<endl;
		}
		else cout <<"0"<<endl;
	}
	return 0;
}
			