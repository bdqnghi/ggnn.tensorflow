int main()
{
	int position,i,lena,lenb,n=10;
	char a[10],b[4],*p=NULL,max;
	while(n--)
	{
		max=0;
		memset(a,'\0',sizeof a);
		memset(b,'\0',sizeof b);
		cin>>a;
		cin>>b;
		lena=strlen(a);
		lenb=strlen(b);
		p=&a[0];
		for(i=0;i<lena;i++)
		{
			if(*p>max)
			{
				max=*p;
				position=i;
			}
			p+=1;
		}
		for(i=0;i<=position;i++)
			cout<<a[i];
		cout<<b;
		for(i=position+1;i<lena;i++)
			cout<<a[i];
		cout<<endl;
	}
	return 0;
}