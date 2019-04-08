
char A[1000];
int main()
{
	cin>>A;
	int len=strlen(A);
	int num;
	for(int i=0;i<len;i++)
	{
		if(i==0)
		{
			num=1;
		}
		
		else
		{
			
			
		    if(A[i]==A[i-1]||A[i]-'A'==A[i-1]-'a'||A[i]-'a'==A[i-1]-'A')
			{
				num++;
			}
			else
			{
				if(A[i-1]>='A'&&A[i-1]<='Z')
				cout<<'('<<A[i-1]<<','<<num<<')';
				else
				{
					char p='A'+A[i-1]-'a';
					cout<<'('<<p<<','<<num<<')';
				}
				num=1;
				
			}
			
			
		}
		if(i==len-1)
		{
			if(A[i]>='A'&&A[i]<='Z')
				cout<<'('<<A[i]<<','<<num<<')';
				else
				{
					char p='A'+A[i]-'a';
					cout<<'('<<p<<','<<num<<')';
				}
		}
	
	}
	
    return 0;
}

