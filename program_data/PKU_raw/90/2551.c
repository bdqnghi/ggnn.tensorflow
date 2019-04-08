int F(int m,int n)   
{   
    if(m==0||m==1) return 1;   
    if(n==0||n==1) return 1;   
    if(m<n) 
		return F(m,m);   
    else 
		return F(m-n,n)+F(m,n-1);   
}
int main()   
{
    int m[20] , n[20] , i; 
	int t;
	cin >> t;
	for(i = 0 ; i < t ; i++)
		cin >> m[i] >> n[i];
    for(i = 0 ; i < t ; i++)   
		cout << F(m[i],n[i]) << endl;
	return 0;
}
