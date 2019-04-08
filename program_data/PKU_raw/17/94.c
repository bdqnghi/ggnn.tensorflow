
int main()
{
	char s[200];
	int i,j,k;
	while(gets(s)!=NULL)
	{
	    int len;
	    len=strlen(s);
	    printf("%s\n",s);

	    for(i=0;i<len;i++)
	    {
	        int zuo=0;
	        int you=0;
	        if(s[i]!='('&&s[i]!=')')
	        {
	            printf(" ");
	        }
	        else if(s[i]=='(')
            {
                for(j=i+1;j<=len;j++)
                {
                    if(s[j]==')')
                    {
                        you++;
                        if(you>zuo)
                        {

                            printf(" ");
                            break;
                        }

                    }
                    if(s[j]=='(')
                    {
                        zuo++;
                    }
                    if(j==len)
                    {
                        printf("$");
                        break;
                    }

                }
            }
            else if(s[i]==')')
            {
                if(i==0)
                {
                    printf("?");
                }
                for(j=i-1;j>=0;j--)
                {
                    if(s[j]=='(')
                    {
                        zuo++;
                        if(zuo>you)
                        {
                            printf(" ");
                            break;
                        }

                    }
                    if(s[j]==')')
                    {
                       you++;
                    }
                    if(j==0)
                    {
                        printf("?");
                    }

                }

            }
	    }
	    printf("\n");


	}

	return 0;

}
