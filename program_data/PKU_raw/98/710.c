int main()
{
	char word[1000][80];                
	int i,n;
	int l1,l2,aa=0;                        
	cin>>n;                             
	for (i=0;i<=n-1;i++)                
	{
		cin>>word[i];                   
	}
	i=0;
	while (i!=n-1)
	{
		l1=strlen(word[i]);             
		l2=strlen(word[i+1]);
		if ((aa+l1+l2+1>80)&&(aa+l1<=80))                    
		{
			cout<<word[i]<<endl;
			aa=0;
			i++;
		}
		else
		{
			cout<<word[i]<<" ";
			aa=aa+l1+1;
			i++;
		}
	}
	if (aa+l2<=80)
		cout<<word[n-1];
	else
	{
		cout<<endl;
		cout<<word[n-1];
	}
	return 0;
}