int main()
{
	char a[50],b[50];
	scanf("%s%s",a,b);
	int m,n,i,j,account;
	m=strlen(a);
	n=strlen(b);
	for(i=0;i<n;i++)
	{
		if(a[0]==b[i])
		
		{   account=i;
			for(j=1,i;j<m,i<n;j++,i++)
			{
				if(a[j]!=b[i+1])
				{
					break;
				}
			    
			}
if(j=(m-1))
	
	 printf("%d\n",account);
			
		}
	}
		
	
	return 0;
}
