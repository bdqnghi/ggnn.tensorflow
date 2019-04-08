int main()
{
	int i;
	char a[81],b[81];     //a[],b[]????? 
	cin.getline(a,81);
	cin.getline(b,81);
	for (i=0;i<strlen(a);i++)
	{
		if (a[i]>='A' && a[i]<='Z')     //????? 
			a[i]=a[i]+32;
	}
	for (i=0;i<strlen(b);i++)
	{
		if (b[i]>='A' && b[i]<='Z')     //?????
			b[i]=b[i]+32;	
	}
	if (strcmp(a,b)==0)       //strcmp???? 
		cout<<"=";
	else if (strcmp(a,b)==1)
		cout<<">";
	else
		cout<<"<"; 
	return 0;	
}