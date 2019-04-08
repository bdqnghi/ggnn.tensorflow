int main()
{
	int i=0;
	char max=0;
	char str[14],substr[4];
	char *p=str,*q=str;
	while(cin>>str>>substr)
	{
		i=0;
		max=*p;
		while(*(p+i)!='\0')
		{
			if(*(p+i)>max)
			{
				max=*(p+i);
				q=p+i;
			}
			i++;
		}
		for(i=11-(q-p+1);i>=1;i--)
		{
			*(q+i+3)=*(q+i);
		}
		for(i=1;i<=3;i++)
		{
			*(q+i)=substr[i-1];
		}
		cout<<str<<endl;
	}
	return 0;
}