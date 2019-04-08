
main()
{
	char str[1000];
	gets(str);
	int i=0;int j=0;char morning;
	int k=strlen(str); int dream=k-1;
	while(i<=dream)
	{
	 morning=str[i];str[i]=str[dream];str[dream]=morning;i++;dream--;
	
	}
	j=0;int m;int y;
	while(j<=k-1)
	{
        m=j;
		while(str[j]!=' '&&j<=k-1) j++;y=j-1;
		while(m<=y){morning=str[m];
		    	str[m]=str[y];
		str[y]=morning;
		m++;y--;}
        j++;
	}
	for(i=0;i<=k-1;i++)cout<<str[i];
}



		