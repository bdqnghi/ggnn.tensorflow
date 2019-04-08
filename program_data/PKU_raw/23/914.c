void main()
{
    char ch1[1000],ch2[1000];
    int i,s,j=0,k;
    gets(ch1);
    s=strlen(ch1)-1;
	ch1[-1]=' ';
    for(i=0;i<=s;i++)
    {
        if(ch1[i]==' ')
        {
            ch2[j]=i;
            j=j+1;
        }
    }
	if(j-1>=0)
	{
		    for(i=ch2[j-1]+1;i<=s;i++)
			{
                printf("%c",ch1[i]);
			}
            for(k=j-1;k>=1;k--)
			{
		        for(i=ch2[k-1];i<ch2[k];i++)
				{
                    printf("%c",ch1[i]);
				}
			}
            for(i=-1;i<ch2[0];i++)
			{
                  printf("%c",ch1[i]);
			}
	}
	else puts(ch1);
}