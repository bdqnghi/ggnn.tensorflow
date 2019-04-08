int main()
{
    char s[256],sub[256],re[256];
    int i,j,k;
    gets(s);
    gets(sub);
    gets(re);
    for(i=0;i<strlen(s);i++)
	{ 
	   for(j=i;j<strlen(sub)+i;j++)
	   {
		    if(s[j]!=sub[j-i]) break;
            if(j==strlen(sub)+i-1)
			{    
	             for(k=j;k>=i;k--)
	            	s[k]=re[k-i];
			}
	   }
	   if(j==strlen(sub)+i)break;
	}
    printf("%s",s);
    return 0;
}
