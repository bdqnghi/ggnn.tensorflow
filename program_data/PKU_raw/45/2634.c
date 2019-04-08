
char a[100],b[100];
int la,lb;

int compare (int k)
{
    for (int i=0;i<la;i++)
    {
        if (a[i]!=b[i+k])
        return 0;
    }
    return 1;
}

int main ()
{
    for (int i=0;i<=99;i++)
    {
        a[i]=getchar();
        if (a[i]==32)
        {
            la=i;
            break;
        }
    }
    for (int i=0;i<=99;i++)
    {
        b[i]=getchar();
        if (b[i]==10)
        {
            lb=i;
            break;
        }
    }
    for (int i=0;i<=lb-la;i++)
    {
        if (compare(i)==1)
        {
            printf("%d",i);
            break;
        }
    }
    return 0;
}
