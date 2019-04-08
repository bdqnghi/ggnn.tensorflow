
int main()
{
    char *x=(char *)malloc(sizeof(char)*100);
    char *y=(char *)malloc(sizeof(char)*100);
    char *a=(char *)malloc(sizeof(char)*100);
    char *b=(char *)malloc(sizeof(char)*100);
    gets(x);
    scanf("%s",a);
    scanf("%s",b);
    int length=strlen(x);
    int l1=strlen(a);
    int l2=strlen(b);

    int yc=0;
    int i;
    for(i=0;i<length;i++)
    {
        if(x[i]==a[0]&&(i==0||x[i-1]==' '))
        {
            int j;
            int test=0;
            for(j=1;j<l1;j++)
            {
                if(x[i+j]!=a[j])
                {
                    test=1;
                    break;
                }
            }
            if(test!=0)
            {
                //printf("error is :%c\n",x[i]);
                y[yc]=x[i];
                yc++;
                //printf("this y is:%s\n",y);
            }
            else
            {
                if((i+j==length||x[i+j]==' ')&&(i==0||x[i-1]==' '))
                {
                    int k;
                    for(k=0;k<l2;k++)
                    {
                        y[yc]=b[k];
                        yc++;
                    }
                    i=i+j-1;
                }
            }
        }
        else
        {
            y[yc]=x[i];
            yc++;
        }
    }
    printf("%s\n",y);

    return 0;
}
