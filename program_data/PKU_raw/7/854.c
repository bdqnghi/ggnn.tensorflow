int main()
{
	char s[1000], a[1000], b[1000], n[1000];
	int j, i, pos, len1, len2, flag = 0;

	cin >> s;
	cin >> a;
	cin >> b;
	if(!strstr(s,a))
	{
		cout << s << endl;
		return 0;
	}
	len1 = strlen(s);
	len2 = strlen(a);

	for(i=0,j=0;s[i]!='\0';i++)
	{
		if(s[i]==a[j])
		{
			j++;
			continue;
		}
		if(j>=len2)
			break;
		if(j)
			j = 0;
		
	}

		pos = i;
		j = i - j;
		for(i=0;i<j;i++)
			n[i] = s[i];
		for(j=0;b[j]!='\0';j++,i++)
			n[i] = b[j];
		j = pos;
		for(;s[j]!='\0';i++,j++)
			n[i] = s[j];
		n[i] = '\0';
		cout << n << endl;


	return 0;
}	