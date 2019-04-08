

int main()
{
	int q1,q2, t = 0,i,n,l1,l2,l,k,max,j;
	char temp, a[300],b[300],c[300],a_[300], b_[300];
	cin.getline(a,300);
	cin.getline(b,300);
	l1 = strlen(a);
	l2 = strlen(b);
	q1 = 0;
	for(i = 0; i < l1; i++)
	{
		if(a[i] == '0')
			q1++;
		else 
			break;
	}
	l1 = l1 - q1;

	q2 = 0;
	for(i = 0; i < l2; i++)
	{
		if(b[i] == '0')
			q2++;
		else 
			break;
	}
	l2 = l2 - q2;

	max = (l1>l2)?l1:l2;
	l = max;

	j = 0;
	for(i = q1 + l1 - 1; i >= q1 ; i--)
		a_[j++] = a[i];
	a_[j] = '\0';
	
	j = 0;
	for(i = q2 + l2 - 1; i >= q2 ; i--)
		b_[j++] = b[i];
	b_[j] = '\0';
	
	if(l1 < max)
	{
		for(i = l1; i < max; i++)
			a_[i] = '0';
	}
	if(l2 < max)
	{
		for(i = l2; i < max; i++)
			b_[i] = '0';
	}
	
	for (i = 0; i < max; i++)
	{
		k = a_[i] - '0' + b_[i] - '0' + t;
		t = 0;
		if(k > 9)
		{
			k = k - 10;
			t = 1;
		}
		c[i] = k + '0';
		if(i == max - 1 && t == 1)
		{
			l = max + 1;
			c[max] = '1';
		}
	}	
	for(i = l - 1; i >= 0; i--)
		cout << c[i];	
	
	if(l1 == 0 && l2 == 0)
		cout << '0';  
	cout<<'\n'; // ???? 
	
		
		

		return 0;

}
