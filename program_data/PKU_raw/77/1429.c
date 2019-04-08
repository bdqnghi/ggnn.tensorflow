char a[100], b;
int w;
int find(int);
int main()
{
	cin >> a;
	b = a[0];
	find(0);
	cin.get();
	cin.get();
	return 0;
}

int find(int j)
{
	w = j;
	if(a[j] != b)
		return j;
	else
	{
		cout << j << " " << find(j+1) << endl;
		return find(w+1);
	}
	return 0;
}