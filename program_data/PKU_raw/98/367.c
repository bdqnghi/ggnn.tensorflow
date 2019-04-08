int main()
{
	int n, i, sum = 0, len;
	char c[10000][41];
	char (*p)[41];
	p = c;
	cin >> n;
	for(i = 0;i < n;i++)
		cin >> *(p+i);
	 for(i = 0;i < n;i++)
	 {
		 len = strlen(*(p+i));
		 if(sum + len > 80)
		 {
			 sum = 0;
			 cout << *(p+i) <<' ';
		 }
		 else if(sum + len < 80)
		 {
			 sum = sum + len + 1;
			 len = strlen(*(p+i+1));
			 if(sum + len > 80)
			 {
				 sum = 0;
				 cout << *(p+i);
				 cout << endl;
			 }
			 else if(sum + len < 80) 
			 {
				 if(i == n-1)  cout << *(p+i);
				 else cout <<*(p+i) <<' ';
			 }
		 }
		 else if(sum + len == 80)
		 {
			 sum = 0;
			 cout << *(p+i-1) <<' '<< *(p+i) <<endl;
		 }
	 }
	 return 0;
}
