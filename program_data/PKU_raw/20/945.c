int main()
{
	char str[30],newstr[30],max;
	int l=0,p=0,i;
	while(cin.getline(str,30))
	{
		max=str[0];
		l=strlen(str);
		for(int i=0;i<=l-5;i++)
		{
			if(max<str[i])
			{
				max=str[i];
				p=i;
			}
		}
		for(i=0;i<=p;i++)
		{
			newstr[i]=str[i];
		}
		for( i=1;i<=3;i++)
		{
			newstr[p+i]=str[l-4+i];
		}
		for(i=p+4;i<=l-2;i++)
		{
			newstr[i]=str[i-3];
		}
		for(i=0;i<=l-2;i++)
		{
			cout<<newstr[i];
		}
		cout<<endl;
		

		
	}
		return 0;
}





	

		
