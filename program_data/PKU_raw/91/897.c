int main()
{
int j=0;
	char a[101],b[101], *p, *q, *i;
	cin.getline (a,101);
	p=a;
	i=a;
	q=b;	for (;*p!='\0';p++,q++)
	{j++;
		if (*(p+1)=='\0')
			*q=*p+*i;
		else
			*q=*p+*(p+1);
	}
	for (int k=0;k<=j-1;k++)
	{
		cout << b[k];
	}
	return 0;
}