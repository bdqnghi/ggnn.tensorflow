char child[1000];
char boy, girl;
int search(int);
int main()
{
	int i;
	cin.getline(child,1000);
	boy = child[0];
	
	for(i = 1; child[i] != '\0'; i++)
	{
		if(child[i] != boy)
		{
			girl = child[i];
			break;
		}
	}
	i = search(0);
	return 0;

}
int search(int m)
{
	int pos;
	if(child[m] != '\0')
	{
	if(child[m]==girl)
		return m;
	else
	{
		pos = search(m + 1);
		cout << m << " " << pos << endl;
		return search(pos + 1);

	}
	}
	else return 0;

}