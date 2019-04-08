int main()
{
	int inta[10],i=1,j,k=0,m=0;
	char str[100];
	cin.get(str,100);


	for(i=0;;i++)
	{
		if(str[i]==' '||str[i]=='\0')
		{
			inta[k]=i;
			k++;
			if(str[i]=='\0')
				{m=k-1;
			     break;}
		}
	}
     
	for(j=m;j>=1;j--){
		for(i=inta[j-1]+1;i<=inta[j]-1;i++)
		{cout<<str[i];}
		cout<<" ";}

	for(i=0;i<=inta[0]-1;i++)
		cout<<str[i];
	return 0;}