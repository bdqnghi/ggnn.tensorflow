int main()
{
	char jz[100];
	cin.getline(jz,100,'\n');
	int gs=strlen(jz);
	int i;
	for(i=0;i<=gs-1;i++)
	{
		if(jz[i]!=' ')
		cout<<jz[i];
		else break;
	}//?????????? 
	for(i;i<=gs-1;i++)
	{
		if(jz[i]!=' '&&jz[i-1]==' ')
		{
			cout<<' '<<jz[i];
	    }
	    else if(jz[i]!=' '&&jz[i-1]!=' ')
	    cout<<jz[i];
	}//??????????????? 
return 0;
}
