void f(char a[1000], char b, char g, int len, int k)
{
	int i, j;

    while(k < len - 1)
	{
	for(i = k;i < len;i++)
	{
		if(a[i] == g)     break;
	}
   
	for(j = i-1;j > 0;j--)
	{
		if(a[j] == b)     break;
	}
	if(i == len) break;
	cout << j << " " <<i << endl;
	a[i] = ' ';
	a[j] = ' ';
	f(a, b, g, len, i+1);
	}



}
int main ()
{
	char a[1000], b, g;
	int len, k = 0;
	cin.getline(a, 1000);
	len = strlen(a);
	b = a[0];
	g = a[len - 1];
    f(a, b, g, len, k);
	return 0;
}

