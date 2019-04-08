int main()
{
	char s[100];
	int i,j,m,k;
	gets(s);
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]==' ')
		m=i;
	}
	for(j=m+1;j<100;j++)
	{
	     if(s[j]==s[0])
              {
                 for(k=1;k<m;k++)
                 {
                     if(s[j+k]!=s[k])
                     {
                          break;
                      }
                 }
               }
               if(k==m)
               {
                   printf("%d",j-m-1);
                   break;
                }
          }
				return 0;
}

