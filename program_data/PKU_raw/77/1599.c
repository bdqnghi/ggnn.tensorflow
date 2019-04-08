int main()
{
	int numl[51];
	int pl=0;
	char str[101];
	cin.getline(str,101);
	int len=strlen(str);
	for(int i=0;i<len;i++)
	{

		if(str[i]==str[0])
		{
			numl[pl]=i;
			pl++;
		}
		else if(str[i]!=str[0])
		{
			cout<<numl[pl-1]<<" "<<i;
cout<<endl;
			pl--;
		}
	}
   
	return 0;
}

