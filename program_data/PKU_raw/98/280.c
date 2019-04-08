int main()
{
	int n,i,len=0;						//??????????????
	char (*p)[40]=NULL;					//??
	char word[2000][40];				//????
	cin>>n;
	for(i=0;i<n;i++)
		scanf("%s",word[i]);
	p=&word[0];							//?????????
	for(i=0;i<n-1;i++)
	{
		len+=strlen(*p);
		if(len+1+strlen(*(p+1))>80)		//??????80
		{
			cout<<*p<<endl;				//??
			len=0;
			p+=1;
		}
		else
		{
			len+=1;
			cout<<*p<<" ";
			p+=1;
		}
	}
	cout<<*p;
	return 0;
}