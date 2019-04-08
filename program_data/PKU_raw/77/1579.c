void queue(char[],int);
char boy,girl;
int main()
{
	char str[100];
	cin.getline(str,100);
	int l=strlen(str);
	boy=str[0];
	for(int i=1;i<l;i++)
	{
		if(str[i]!=boy) 
		{
			girl=str[i];
			break;
		}
	}
	for(int i=0;i<l;i++)
	{
	  queue(str,l);
	}
	return 0;
}
void queue(char a[],int s)
{
	
	for(int i=0;i<s;i++)
	{
		if(a[i]==boy)
		{
			int k=1;
			while(a[i+k]=='0'){k++;}
			if(a[i+k]==girl)
			{
				cout<<i<<" "<<i+k<<endl;
				a[i]='0';
				a[i+k]='0';
				break;
			}
		}
	}
}