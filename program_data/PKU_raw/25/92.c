void change(char a[]);
int len=1;
int main()
{
	int n,i;
	char a[500];
	cin>>n;
	a[0]='1';
	a[1]='\0';
	
	for(i=1;i<=n;i++)
	{
        
		
		
		change(a);
	}
	
	for(i=len-1;i>=0;i--)
	{
	   cout<<a[i];
	}

	return 0;
}
void change(char a[])
{
	int k=len,b,q=0;
	
	while(k>=1)
	{
		
		b=(a[k-1]-'0')*2;
		if(b<10)
		{
			a[k-1]=b+'0';
		}
		else

		{
			
			a[k-1]=b-10+'0';
			if(a[k]=='\0')
			{
				a[k]='1';
				len++;
				a[k+1]='\0';
			}
			else
			{
				a[k]=a[k]+1;
			}
		}
		
		k--;
	}
}

