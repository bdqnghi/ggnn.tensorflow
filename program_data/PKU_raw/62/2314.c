int main()
{
	int i,j;
	char a[10000];
	cin.getline(a,10000);
	for(i=0;i<10000;i++)
		if(a[i]!=' '){
			cout<<a[i];break;
		}
 int len=strlen(a);
	for(j=i+1;j<len;j++)
	{
		if(!((a[j]==' ')&&a[j+1]==' '))cout<<a[j];
	}

	return 0;
}
