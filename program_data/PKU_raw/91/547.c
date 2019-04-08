/***************
*??????
*?????
****************/
int main()
{
	char a[101], b[101];           
	int l;
	cin.getline(a,101);
	l = strlen(a);
	for(int i=0; i < l; i++)
	{
		if(i < l-1)
		{
			b[i] = (char)(a[i] + a[i+1]);
		}
		else
		{
			b[i]= (char)(a[i] + a[0]);
		}
	}
	for(int j=0; j < l; j++)
	{
		cout << b[j];
	}
return 0;
}