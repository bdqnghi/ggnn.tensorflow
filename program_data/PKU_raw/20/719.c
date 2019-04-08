int fmax(char str[]);

int main()
{
	char str[11],substr[4],rstr[14];
	int i;
	while (cin.getline(str,12,' ')&&cin.getline(substr,4))
	{
		for (i=0;i<=fmax(str);i++)
			rstr[i]=str[i];
		for (i=0;i<3;i++)
			rstr[fmax(str)+1+i]=substr[i];
		for (i=0;i<strlen(str)-fmax(str)-1;i++)
			rstr[fmax(str)+4+i]=str[fmax(str)+i+1];
		rstr[fmax(str)+4+i]='\0';
		cout<<rstr<<endl;
	}
	return 0;
}

int fmax (char str[])
{
	int max=0,i;
	for (i=0;i<strlen(str);i++)
		max=(str[i]>str[max]? i:max);
	return max;
}