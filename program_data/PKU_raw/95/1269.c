int main()
{
	int i=0;
	char a[80],b[80];
	cin.getline(a,80);
	cin.getline(b,80);
	for(;;i++)
	{
		if(a[i]>95) a[i]=a[i]-32;
		if(b[i]>95) b[i]=b[i]-32;
		if(a[i]=='\0'&& b[i]=='\0') break;
	}
	if(strcmp(a,b)==0) cout << "=";
	if(strcmp(a,b)>0) cout << ">";
	if(strcmp(a,b)<0) cout << "<";
	return 0;
}