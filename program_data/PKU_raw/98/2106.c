int main()
{
	char words[10000][41];
	char *p;
	int i,n,l=0;
	int len[10000];
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>words[i];
	}
    
	for(i=0;i<n;i++)
	{
		len[i]=strlen(words[i]);
	}
	

	for(i=0;i<n;i++)
	{
		p=words[i];
		if(l+len[i]+1<=80)
		{
			if(i!=0)
			{
				cout<<" "<<p;
			l+=len[i]+1;
			}
			else {
				cout<<p;
				
			l+=len[i];
			}
			
			continue;
		}
		
		else {

			cout<<endl;
			cout<<p;
			l=0;
			l+=len[i];
			continue;
		}	
	}


	return 0;
}

