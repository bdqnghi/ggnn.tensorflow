//**********************************
//?????????ASCII?
//???2013.11.16
//**********************************
int main(void)
{ 
	int i=0,j=0;
	char a[81],b[81];
	cin.getline(a,80);
	cin.getline(b,80);
    for(i=0;i<strlen(a);i++)
	{
		if(65<=a[i]&&a[i]<=90)
			a[i]=a[i]+32;
	}
	for(i=0;i<strlen(b);i++)
	{
		if(65<=b[i]&&b[i]<=90)
			b[i]=b[i]+32;
	}
	if(strcmp(a,b)==0)
		cout<<"="<<endl;
	else if(strcmp(a,b)>0)
		cout<<">"<<endl;
	else
		cout<<"<"<<endl;

		  return 0;
}