int main()
{
    char str[1000],b[1000];
    gets(str);
    int i,j=1,k=1,a[1000],len;
    len=strlen(str);
    for(i=0;i<len;i++)
    {
        b[0]=str[0];
        if(str[i]==str[i+1]||str[i]==str[i+1]-32||str[i]==str[i+1]+32)
        {
            k++;
        }
        else
        {
            b[j]=str[i+1];
            a[j-1]=k;
            j++;
            k=1;
        }
    }
        if(j==1)
        {
            a[j-1]=k;
        }
    else if(str[len-1]==str[len])
        a[j-2]+=1;
    for(i=0;i<j-1;i++)
    {
        if(b[i]<=122&&b[i]>=97)
        {
            b[i]=b[i]-32;
        }
        printf("(%c,%d)",b[i],a[i]);
    }
    return 0;
}