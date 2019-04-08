int main()
{
	int j,k,p,d,x;
    char a[101];
	char b[101];
    while(gets(a))
	{
        puts(a);
		for(j=0;a[j]!='\0';j++)
		{

			if(a[j]=='(')
			{
				b[j]='$';
			}
			else 
				if(a[j]==')')
				{
				   b[j]='?';
				}
			    else
				{
				   b[j]=' ';
				}
		}
		b[j]='\0';
		for(k=0;a[k]!='\0';k++)
		{              
		    if(b[k]=='?')
			{
                   d=0;
			       for(p=k-1;p>=0;p--)
			       {
					    if(b[p]=='$')
						{
						    x=p;						
						    d=1;
                            break;
						}
				   }
				   if(d==1)
				   {
			        	b[k]=' ';
			        	b[x]=' ';
				   }
			}	
		}
       for(k=j;k>=0;k--)
	   {
		   if(b[k]!=' '&&b[k]!='\0')
			   break;
	   }
       for(p=0;p<j;p++)
	   {
		   if(b[p]!=' ')
			   break;
	   }
	   for(x=p;x<=k;x++)
		   printf("%c",b[x]);
	   printf("\n");
	}
	return 0;
}
