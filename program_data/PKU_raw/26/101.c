int main()
{
	char str1[10000],str2[10000];
	int i=0,k=1;
	cin.getline(str1,10000);
	str2[0]=str1[0];
	for(i=1;i<10000;i++)
	{
		if((str1[i]!=' ')||((str1[i-1]!=' ')&&(str1[i+1]==' '))||((str1[i-1]!=' ')&&(str1[i+1]!=' ')))
		{
			str2[k]=str1[i];
			k=k+1;
		}
	}
	cout<<str2<<endl;
	return 0;
}