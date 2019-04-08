int main()
{
	int n, i, sum = 0, len;
	char c[10000][41];
	cin >> n;
	for(i = 0;i < n;i++)
		cin >> c[i];
	 for(i = 0;i < n;i++)
	 {
		 len = strlen(c[i]);
		 if(sum + len > 80)
		 {
			 sum = 0;
			// cout << endl;
			 cout << c[i] <<' ';
		 }
		 else if(sum + len < 80)
		 {
			 sum = sum + len + 1;
			 len = strlen(c[i+1]);
			 if(sum + len > 80)
			 {
				 sum = 0;
				 cout << c[i];
				 cout << endl;
			 }
			 else if(sum + len < 80) 
			 {
				 if(i == n-1)  cout << c[i];
				 else cout <<c[i] <<' ';
			 }
		 }
		 else if(sum + len == 80)
		 {
			 sum = 0;
			 cout << c[i-1] <<' '<< c[i] << endl;
		 }
	 }
	 return 0;
}


