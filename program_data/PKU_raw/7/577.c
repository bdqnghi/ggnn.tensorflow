
int main()
{
    char s[101], a[101], b[101],copy[101],before[101],after[101];
    gets(s);
	gets(a);
	gets(b);

    int i=0,j;
    for(i;i<=(int)(strlen(s)-strlen(a));i++)
    {
            for(j=0;j<(int)(strlen(a));j++)
            {
                    copy[j]=s[i+j];
            }
            copy[j]='\0';
            if (strcmp(copy,a)==0)
			{
				for(j=0;j<i;j++)
				{
                    before[j]=s[j];
				}
				before[j]='\0';
				for(j=i+(int)strlen(a);j<(int)(strlen(s));j++)
				{
                    after[j-i-(int)strlen(a)]=s[j];
				}
				after[j-i-(int)strlen(a)]='\0';
				strcat(before,b);
				strcat(before,after);
				strcpy(s,before);
				break;
			}
	}
    puts(s);
	return 0;
} 
