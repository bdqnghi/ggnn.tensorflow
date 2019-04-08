
int main()
{
         char a[1000];
	int i,j;
	cin.getline(a,1000);
	for(i=0;i<strlen(a);i++)
	{
		if(a[i]!=' ')continue;
		else 
		{
			for(j=i+1;j<strlen(a);j++)
			{
				if(a[j]==' ')a[j]='0';
				else break;
			}
		}
	}
	for(i=0;i<strlen(a);i++)
	{
		if(a[i]!='0')cout<<a[i];
	}
	return 0;
}

