
int main()
{
	char s[100],a[100],b[100],c;
	int i,j,k,flag=1;	
	int count=0;
	memset(a,0,sizeof(a));
	memset(s,0,sizeof(s));
	memset(b,0,sizeof(b));
	cin.getline(s,100);
	cin.getline(a,100);
	cin.getline(b,100);
	

   

	for(i=0;i<=strlen(s);i++)
	{
		flag=1;
		if(s[i] || s[i+1])
		{
		if(s[i-1]==32 || i==0)
		{
		for(j=0;a[j]!=0;j++)
		{
			if(s[i+j]==a[j])
			continue;
			else{
				flag=0;
				break;
			}
		}
		if(flag==1)
		{
			i+=j-1;
			for(k=0;b[k]!=0;k++)
			{
			cout<<b[k];
			}
			

		}
		else
		{
			if(s[i]==0)
			{
				cout<<" ";
			}
			else
			
			cout<<s[i];
		}
		}

		
		
		else cout<<s[i];  
		}
		
	}
	
	

			
	
		


	return 0;
}




