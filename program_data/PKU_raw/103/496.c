

int main()
{
	char a[1000] = {0};
 	char b[1000] = {0} ;
	cin >> a;
	

	int len = strlen (a);
	int i=0, j = 0, k = 0;
	for(i=0; i<len ; i++)
		if(a[i]>='a' && a[i] <= 'z')
			a[i] -= ('a' - 'A');

    memset(b, 0, sizeof(b));
	b[0] = a[0];


	i = 0;
 	while(i < len)
 	{
		for(j=i+1; j <len ; j++ )
		{
		 	if(a[j] != a[i])
			{
				k++;
				b[k] = a[j];
				break;
			}
		}
		i = j;
	}
		
	
		
	int c[1000];
	memset(c,0,sizeof(c));
	for(i=0,k=0 ; i< len && k < len ;i++ , k++)
	{		
			j=i;
			for(; j<len ;j++)
			{	
				if(b[k] != a[j])
					k++;
				if( b[k] == a[j])
					c[k]++;
			}	
	}
	
	for(i=0 ; i <len ; i++)
	{
		if(b[i] == 0)
			break;
		cout<< "(" << b[i]<< ',' << c[i] <<")" ;
	}
	cout<<endl;
	return 0;
}

