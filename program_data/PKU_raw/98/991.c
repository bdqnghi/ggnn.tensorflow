int word_len(char *p)  //????????
{
	int n=0;
	for (;*p!=0&&*p!=' ';p++)
		n++;
	return n;
}
int main ()
{
	char str[10001]={0};
	char *p=str;
	int n;
	cin>>n;
	getchar();
	cin.getline(p,10000,'\n');
	int row=0;
	for (int i=0;i<n;i++)
	{
		if (row+word_len(p)<=79)
		{
			if (row!=0)
			{
				cout<<" ";
				row++;  //???????
			}
			row+=word_len(p);
			for (;*p!=' '&&*p!=0;p++)
				cout<<*p;  //??????
		}
		else //??80???
		{
			cout<<endl;
			row=word_len(p);
			for (;*p!=' '&&*p!=0;p++)
				cout<<*p;  
		}
		p++;
	}
	
	return 0;
}