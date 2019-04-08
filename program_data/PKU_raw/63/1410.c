int main () 
{
    int n , m , j , k;
    cin >>n>>m;
    cout <<endl;
    int a[102][102] , b[102][102];
    for (int i = 0;i < n;i++)//???????
       {
	 for (int l = 0;l < m;l++)
	 cin >>a[i][l];
	 cout <<endl;
       }
    cout <<endl;
    cin >>j>>k;
    cout <<endl;
    for (int i = 0;i < j;i++)//???????
       {
	 for (int l = 0;l < k;l++)
	 cin >>b[i][l];
	 cout <<endl;
       }
     cout <<endl;
     int c[102][102];
     for (int i = 0;i < n;i++)
	for (int l = 0;l < k;l++)
	{
	   c[i][l] = 0;
	   for (int p = 0;p < m;p++)//?????????
	   c[i][l]=c[i][l] + a[i][p]*b[p][l];
	}
     for (int i = 0;i < n;i++)
	{
	   for (int l = 0;l < k-1;l++)//??????????
	   cout <<c[i][l]<<" ";cout <<c[i][k-1]<<endl;
	   cout <<endl;
	  }
     cout <<endl;
     return 0;
}

