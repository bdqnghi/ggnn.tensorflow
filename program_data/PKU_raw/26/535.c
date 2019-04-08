int main()
{
	char string[100];
	int n=0,m=0,len;
	cin.get(string,100,'\n');
	len=strlen(string);
	while(n<len)
	{
		if(string[n]==' ')
		{
			if(string[n-1]==' ')
			{
				len=len-1;
				for(int i=n;i<len;i++)
					string[i]=string[i+1];
				string[len]='\0';
				n--;
			}
		}
		n++;
	}
	cout<<string<<endl;
	return 0;
}