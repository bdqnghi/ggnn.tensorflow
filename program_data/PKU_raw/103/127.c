
void main ()
{
    char a[1001];
    int i,j,k;
    gets(a);
    for (i=0;a[i]!='\0';i++)
    {
        if (a[i]>90)
        a[i]=a[i]-32;
    }
    for (i=0;a[i]!='\0';)
    {
        for (j=0;;j++)
        {
            if (a[i+j]!=a[i]) break;
        }
        printf("(%c,%d)",a[i],j);
        i=i+j;
    }
}
