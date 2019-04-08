int main()
{
	char a[100][100]={'\0'},b;
	int i1=0,i2=0;
	while (cin.get(b)&&b!='\n')
	{
		if (b!=32)
			a[i1][i2++]=b;//????
		else if (b==32)
			i1++,i2=0;//???????
	}
	for (int d=i1;d>=1;d--)
        cout<<a[d]<<" ";//????
	cout<<a[0];
	return 0;
}