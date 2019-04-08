int main()
{
	int n, i=0, j, k=0, cnt[500]={0}, largest, *q=&cnt[0];
	char str[500], gram[500][5], *p=&str[0];
	cin >> n;
	cin >> str;
	while (i<=strlen(str)-n)
	{
		for (j=0;j<n;j++)
		{
			*(gram[k]+j) = *(p+i);
			i++;
		}
		i = i-n+1;
		k++;
	}
	for (i=0;i<k;i++)
	{
		*(gram[i]+n) = '\0';
	}
	for (i=0;i<k;i++)
	{
		for (j=0;j<k-i;j++)
		{
		    if (strcmp(*(gram+i),*(gram+i+j)) == 0)
				*(q+i) = *(q+i)+1;
		}
	}
	largest = *q;
	for (i=1;i<k-1;i++)
	{
	    if (*(q+i) > largest)
		{
		    largest = *(q+i);
		}
	}
	if (largest <= 1)
		cout << "NO" << endl;
	else
	{
	    cout << largest << endl;
	    for (i=0;i<k;i++)
		{
		    if (*(q+i) == largest)
			    cout << *(gram+i) << endl;
		}
	}
	return 0;
}
