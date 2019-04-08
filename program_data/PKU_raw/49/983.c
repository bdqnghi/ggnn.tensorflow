
int main()
{
    char a[500];
    char b[500];
    int len,i,j,k,judge;
    fgets(a,500,stdin);
    len=strlen(a)-1;
    for(i=0;i<len;i++)
        b[len-1-i]=a[i];
    for(i=2;i<=len;i++)
        for(j=0;j<=len-i;j++)
        {
            judge=0;
            for(k=0;k<=i-1;k++)
            {
                judge=judge+(a[j+k]-b[len-i-j+k])*(a[j+k]-b[len-i-j+k]);
            }
            if(judge==0)
            {
                for(k=0;k<=i-1;k++)
                    printf("%c",a[j+k]);
                printf("\n");
            }
        }




    return 0;
}
