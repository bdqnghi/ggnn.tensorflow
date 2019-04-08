/*              ?????
??????              2010.12.15      */
int main()
{
	int i;
	char a[110];
	cin.getline(a,sizeof(a));
	for(i=0;i<strlen(a)-1;i++)
		cout<<(char)(a[i]+a[i+1]);
	cout<<(char)(a[strlen(a)-1]+a[0])<<endl;
	return 0;
}