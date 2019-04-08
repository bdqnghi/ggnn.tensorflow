int judge(char a[],int i,int k)
{
   int j=i+k;
    while(a[i]==a[j]&&i<=strlen(a)&&j>=0)
    {
        i++;j--;

    }
    if(i>=j)
        return 1;
    else return 0;
}

int main()
{
    char a[510];
    memset(a,0,sizeof(char)*510);
    gets(a);
                                        /*if(judge(a))
                                        printf("YES");
                                        else printf("NO");*/
    int i,j,k;
    for(k=1;k<strlen(a);k++)
    {
        for(i=0;i+k<strlen(a);i++)
        {

                if(judge(a,i,k))
                {
                    for(j=i;j<=i+k;j++)
                        printf("%c",a[j]);
                    putchar('\n');
                }

        }

    }

    return 0;
}
