int main()
{
	char a[110]={'\0'};
	int i,len,mark1[110]={0},judge,k=0,j,k1=0;
	while(cin.getline(a,110))
	{
		len=strlen(a); 
		k=0;     
		for(i=0;i<110;i++)                    
			mark1[i]=0;
		for(i=0;i<len;i++)
		{
			if(a[i]=='('||a[i]==')')  
			{
				if(k==0)
				{
					if(a[i]=='(')
						mark1[k]++;
					else
						mark1[k]--;
					k++;
				}
				else
				{
					judge=0;
					if(a[i]=='(')
						mark1[k]=1;
					else if(a[i]==')')
					{
						mark1[k]=-1;
					for(j=k-1;j>=0;j--)
					{
						if(mark1[j]==1)
						{
							mark1[j]=0;mark1[k]=0;break;
						}
					}
					
						
					}
					
						k++;        
					                       
				}                
			}

		}
		k1=0;
cout<<a<<endl;
		for(i=0;i<len;i++)
		{
			if(a[i]!='('&&a[i]!=')')
				cout<<' ';
			else
			{
				if(mark1[k1]==0)
					cout<<' ';
				else if(mark1[k1]>0)
					cout<<'$';
				else
					cout<<'?';
				k1++;
			}
		}
		cout<<endl;
	}
	return 0;
}