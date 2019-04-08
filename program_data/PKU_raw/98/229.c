int check(char *p)
{
	int i=0;
	int temp;
	for(i=0;i<81;i++)
	{
		if(*(p+i)=='\0')//?????????
		{
			temp=0;
			break;
		}
		else
			temp=1;
	}
	return temp;
}
void out(char *p)
{
	int i,j;
	if(check (p)==1)
	{
		if(*(p+80)==' ')//???????
		{
			for(i=0;i<80;i++)
				cout<<*(p+i);
			cout<<endl;
			out(p+81);
		}
		else
		{
			for(i=0;i<80;i++)//????????????????
			{
				if(*(p+80-i)==' ')
					break;
			}
			for(j=0;j<80-i;j++)//??????
				cout<<*(p+j);
			cout<<endl;
			out(p+81-i);
		}
	}
	else if(check(p)==0)
		cout<<p;
}
int main()
{
	int n;
	cin>>n;
	cin.get();
	int i=0,j=0,k=0;
	char words[30000]={0};
	cin.get(words,30000,'\n');
	//cout<<words;
	char *p=&words[0];
    out(p);
	
}
