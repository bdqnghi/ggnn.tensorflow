int main()
{
	char str[40][101]={'\0'};
	char c[101]={'\0'};
	cin.getline(c,101);
	int i=0,j=0,k=0;
	while(c[i]!='\0')
	{
		if(c[i]!=' ')
		{
			str[j][k]=c[i];
			k++;
		}
		if(c[i]==' ')
		{
			j++;
			k=0;
		}
		i++;
	}
	char st1[100],st2[100];
	cin>>st1;
	cin>>st2;
	for(i=0;i<j+1;i++)
	    if(strcmp(str[i],st1)==0)
			strcpy(str[i],st2);
	for(i=0;i<j;i++)
		cout<<str[i]<<" ";
	cout<<str[j];
	return 0;
}