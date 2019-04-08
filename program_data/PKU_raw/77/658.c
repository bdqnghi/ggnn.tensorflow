char str[100];
int i, k, l, j, p, q;
int nan, nv, nan1[100], nv1[100], nan2[100];
void pai();
int main()
{
	cin >> str;
	for(i = 1; ; i++)
	{
		if(str[i] != str[0])
		{
			k = i; break;
		}
	}
	for(i = 0; str[i] != '\0'; i++)
	{
		l++;
	}      
	j = 0;
	p = 0;
	for(i = 0; i < l; i++)
	{
		if(str[i] == str[0])
		{
			nan++;
		    nan1[j++] = i;
		}
		if(str[i] == str[k])
		{
			nv++;
			nv1[p++] = i;
		}
	}
	pai();
	return 0;
}
void pai()
{
	i = 0;
	j = 0;
	p = 0;
	for(i = 0; str[i] != '\0'; i++)
	{
	if(str[i] == str[0])
	{
		nan2[j] = 1;
	    j++;
	}
	if(str[i] == str[k])
	{
		for(q = j; q >= 0 ; q--)
		{
			if(nan2[q])break;
		}
	    cout << nan1[q] << ' ' << nv1[p] << endl;
		p++;
		nan2[q] = 0;
	}
	}
}