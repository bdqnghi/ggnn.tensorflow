int main()
{
	char series[101];
	cin.getline(series, 102);
	char *p = series;
	char initial = *p;
	char trans[101];
	char *q = trans;
	for(; p < series + strlen(series) - 1; p++, q++)
	{
		*q = *p + *(p+1);
	}
	*q = *p + initial;
	*(q+1) = '\0';
	cout << trans << endl;
	return 0;
}