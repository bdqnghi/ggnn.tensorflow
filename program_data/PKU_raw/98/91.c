

int main()
{
	char t[85],in[45];
	char *p = t, *q = in;
	int n;
	cin>>n;
	int i,sum = 0,len,j,k = 0;

	for(i = 0; i < n; i ++)
	{
		cin>>in;

		q = in;
		k = 0;

		len = strlen(in);

		while(*q != '\0')
		{
			*p++ = *q++;
			k++;
			sum ++;

			if(sum > 80)
			{
				p = p - k;
				sum -= k;

				if(*(p-1) == ' ')
				{
					p --;
					sum --;
				}

				q = in;
				k = 0;

				*p = '\0';
				cout<<t<<endl;

				p = t;
				sum = 0;

				while(*q != 0)
				{
					*p++ = *q++;
					k++;
					sum ++;
				}
			}
		}
		if(sum < 80)
		{
			*p = ' ';
			p++;
			sum ++;
		}
	}
	p--;
		*p = '\0';
		cout<<t;
	return 0;
}