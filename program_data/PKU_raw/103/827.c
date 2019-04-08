int main()
{
    char string[1001];
    gets(string);
    int n;
    n=strlen(string);
    int i;
    int m=1;
    for(i=0;i<n;i++)
    {
                    if(string[i]>=97)
                    string[i]=string[i]-32;
    }
    for(i=0;i<n;i++)
    {
                    if(string[i]==string[i+1])
                    {
                        m++;
                    }
                    else
                    {
                        
                         printf("(%c,%d)", string[i], m);
                         m=1;
                    }
    }
    
    return 0;
}
