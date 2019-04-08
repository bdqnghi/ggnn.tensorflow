char s[1000][256];
int main()
{
	int n,a[1000],i,k;
	
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",s[i]);

	}
    for(i=0;i<n;i++)
	{   a[i]=strlen(s[i]);
		for(k=0;k<a[i];k++)
		{
			if(s[i][k]=='A')
			{ 
				s[i][k]='T';
			}
			else
			{
				if(s[i][k]=='T')
				{
                   s[i][k]='A';
				}
				else
				{
					if(s[i][k]=='C')
					{
                       s[i][k]='G';
					}
					else
					{
                       s[i][k]='C';
					}
				}
				
			}
		}
	}
  for(i=0;i<n;i++)
  {    a[i]=strlen(s[i]);
	  for(k=0;k<a[i];k++)
	  {   
		  if(k<(a[i]-1))
		  {
			  printf("%c",s[i][k]);
		  }
			  else
		 {
               printf("%c\n",s[i][k]);
		 }
	  }
  }
   printf("%s",s[n]);
  return 0;
}