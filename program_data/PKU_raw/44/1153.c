main()
{
    int j;
    int reverse(int num);
    for(j=1;j<=6;j++)
    {


    char a[1000],b[1000];
    gets(a);
    int i,count=0,len=strlen(a);
    if(a[0]=='-')
    {
        for(i=1;i<len;i++)
        {
            b[i]=a[len-i];
            }
        printf("-");
        b[len]='\0';
        for(i=1;b[i]!='\0';i++)
        {
            if((b[i]!='0')||(b[i]=='0'&&count!=0))
            {
                printf("%c",b[i]);
                count++;
            }
        }
        printf("\n");
        }
    else
    {
        for(i=0;i<len;i++)
        {
            b[i]=a[len-1-i];
            }
        b[len]='\0';
        for(i=0;b[i]!='\0';i++)
        {
            if((b[i]!='0')||(b[i]=='0'&&count!=0))
            {
                printf("%c",b[i]);
                count++;
            }
        }
        printf("\n");
    }
    }
    }
