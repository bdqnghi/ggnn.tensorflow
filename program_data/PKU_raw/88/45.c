int main()
{
	char a[40];int i;
	cin.getline(a,31,'\n');
	for(i=0;i<strlen(a);i++)
		if(a[i]>='0'&&a[i]<='9')
			cout<<a[i];
		else cout<<endl;
	return 0;
}
