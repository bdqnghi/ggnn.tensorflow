char s[100];
int l;
int n;
int main()
{
    int i;
    scanf("%d\n",&n);
    for(i=0;i<n;i++)
    {
        l=strlen(gets(s));
            if(l>=3 && s[l-3]=='i' && s[l-2]=='n' && s[l-1]=='g')
            {
                s[l-3]='\0';
            }
            else if(l>=2 && s[l-2]=='e' && s[l-1]=='r')
            {
                s[l-2]='\0';
            }
            else if(l>=2 && s[l-2]=='l' && s[l-1]=='y')
            {
                s[l-2]=0;
            }
            puts(s);
        }
        return 0;
    }
        
