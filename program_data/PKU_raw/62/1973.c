int main()
{
	int i,l;
	char a[100],*p=NULL,*q=NULL;
	cin.getline(a,100);
    l=strlen(a);
	p=a;
	for(i=0;i<l-1;i++)
	{
		if(*(p+i)==' '&&*(p+i+1)==' ')
		{
			for(q=a+i+1;*q!=0;q++)
				*q=*(q+1);
			i--;
			l--;
		}
	}
	cout<<a<<endl;
	return 0;
}
