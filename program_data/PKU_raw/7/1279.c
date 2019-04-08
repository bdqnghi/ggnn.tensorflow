int main()
{
    char a[101];
    char b[101];
    char c[101];
    int i,j;
    int length1,length2,length3;
    int p;
    scanf("%s%s%s",a,b,c);
    length1=strlen(a);
    length2=strlen(b);
    length3=strlen(c);
    for(i=0;i<length1;i++)
    {
        if(a[i]==b[0])
        {
            p=0;
            for(j=1;j<length2;j++)
            {
                if(a[i+j]!=b[j])
                {
                    p=1;
                    break;
                }
            }
            if(p==0)
            {
                for(j=0;j<i;j++)
                {
                    printf("%c",a[j]);
                }
                for(j=0;j<length3;j++)
                {
                    printf("%c",c[j]);
                }
                for(j=i+length3;j<length1;j++)
                {
                    printf("%c",a[j]);
                    
                }
            p=2;
            break;
            }
        }
    }
    if(p!=2)
    {
        for(i=0;i<length1;i++)
        {
            printf("%c",a[i]);
        }
    }
    return 0;
}

