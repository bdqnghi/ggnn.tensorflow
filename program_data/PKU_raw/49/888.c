int main()
{
    int i,len,j,times,k,flag=1;
    char str[500];
    scanf("%s",str);
    len=strlen(str);
    for(i=2;i<=len;i++)
    {
        times=i/2;
        for(j=0;j<=len-i;j++)
        {
            for(k=j;k<=j+times-1;k++)
            {
                if(str[k]!=str[i+2*j-1-k])
                {flag=0;break;}
            }
            if(flag==1)
                {for(k=j;k<=i+j-1;k++)
                printf("%c",str[k]);
                printf("\n");}
            flag=1;
        }
    }
    return 0;
    
}