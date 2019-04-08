int main()
{
	char s[101],a[101],b[101],t[101],w[101];
	gets(s);
	gets(a);
	gets(b);
    int i,j,r,k,n;
	for(n=1;n<5;n++)
	{r=0;
	    for(i=0;i<101;i++)
		{
			if(s[i]!=0)
            {
				if(s[i]!=' ')
		            t[i-r]=s[i];
		        else
				{
			        t[i-r]=0;
                    r=r+strlen(t)+1;
			        if(strcmp(t,a)==0)
					{   
				        k=strlen(t);
			            for(j=i;j<101;j++)
					        w[j-i]=s[j];
				        s[i-k]=0;
			            strcat(s,b);
						strcat(s,w);
					}
				}
			}
			else
			{
                t[i-r]=0;
				if(strcmp(t,a)==0)
				{   
				    k=strlen(t);
				    s[i-k]=0;
			             strcat(s,b);
                                         break;
				}
			}
		}
	}
	printf("%s\n",s);
	return 0;	
}