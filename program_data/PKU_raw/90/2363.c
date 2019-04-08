int place(int m, int n)
{
	if (m < 0)
	  return(0);
	if (n == 1) 
	  return(1);
	return(place(m, n - 1) + place(m - n, n));
}
int main()
{
	int m[20], n[20], t, i;
	cin >> t;
	for (i = 0; i < t; i++)
	  cin >> m[i] >> n[i];
	for (i = 0; i < t; i++)
	  cout << place(m[i], n[i]) << endl;
	return(0);
 } 