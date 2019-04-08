int main()
{
	int n, i, num=0, l, j;
	char a[40], *p;
	cin >> n;
	while(n>0)
	{
		memset(a, 40, '\0');
		cin >> a;
		l=strlen(a);
		a[l]='\t';
		p=a;
		if(num+l <= 80)
		{
			if(num>0)
			{
				cout << " ";
			}
			for(i=0; a[i] != '\t'; i++)
			{
				cout << *(p+i);
			}
			num += l+1;
		}
		else
		{
			num=0;
			cout << endl;
			for(i=0; i<l; i++)
			{
				cout << *(p+i);
			}
			num += l+1;
		}
		n--;
	}
	return 0;
}