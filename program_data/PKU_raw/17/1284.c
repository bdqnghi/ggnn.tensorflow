int main(int argc, char* argv[])
{
	int n,p,i,j,len;
	scanf("%d",&n);
	for(p=0;p<n;p++)
	{
	    char a[150];
		scanf("%s",a);
        len=strlen(a);
        char b[150];
		for(i=0;a[i]!=0;i++)
		{
		    switch(a[i])
		     {
		            case '(':b[i]='$';
						     break;
					case ')':b[i]='?';
						     break;
					default :b[i]=' ';
		     }
		}
	    for(i=0;i<len;i++)
		{
		    if (b[i]=='?')
			{
			      for (j=i-1;j>=0;j--)
				  {
				        if(b[j]=='$')
						{
						     b[i]=' ';
							 b[j]=' ';
							 break;
						}
				  }
			}
		}
		printf("%s",a);
		printf("\n");
		for(i=0;i<len;i++)
		printf("%c",b[i]);
		printf("\n"); 
		
	}
	return 0;
}
