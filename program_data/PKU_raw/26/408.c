int main()
{
	char a[100],b[100];
	char *p;
	int i,j=1;
	gets (a);
    p=a;
	b[0]=a[0];
	for(i=1;i<100;i++)
	{
		if(*(p+i)==' ')
		{
			if(*(p+i-1)!=' ')
			{
				b[j]=*(p+i);
				j++;
			}
		}
		else
		{
			b[j]=*(p+i);
			j++;
		}
	}
	cout << b << endl;
	return 0;
}
				