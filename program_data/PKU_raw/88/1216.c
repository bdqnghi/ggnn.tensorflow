//????
//by.???
//on.20101229

int main()
{
	char c[31];
	cin.getline(c,31);                              //??
	int i;
	for(i=0;i<strlen(c);i++)
	{
		if( (c[i] - '0' < 0 )|| (c[i] - '9' > 0))
		{
			cout<<endl;
			continue;
		}
		else
			cout<<c[i];                              //????c??????????????????
	}
	return 0;
}