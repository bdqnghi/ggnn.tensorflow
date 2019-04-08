char s[3001];
int len;

int main()
{
    int i,miao=1,n=0;
    gets(s);
    len=strlen(s);
    for(i=0;i<=len;i++)
    {
        if(s[i]==' '||s[i]=='\0')
        {
            if(n!=0)
            {
                if(miao!=1)
                    printf(",");
                    printf("%d",n);
                    miao++;
            }
            n=0;
        }
        else
        n++;
    }
    printf("\n");
    return 0;
}



