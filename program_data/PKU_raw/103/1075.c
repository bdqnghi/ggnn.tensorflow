int main()
{
    char a[1000],b[10];
    int num[10]={1,1,1,1,1,1,1,1,1,1};
    scanf("%s",&a);
    int i=0;
    while (a[i]!='\0')
    {
          if (a[i]>='a' && a[i]<='z')
          a[i]=a[i]-'a'+'A';
          i++;
    }
    int j=0;
    b[j]=a[0];
    for (int i=1;i<=999;i++)
    {
        if (a[i]==a[i-1])
        num[j]++;
        else
        {
            j++;
            b[j]=a[i];
        }
        if (a[i]=='\0')
        break;
    }
    for (int i=0;i<=j-1;i++)
    printf("(%c,%d)",b[i],num[i]);
    printf("\n");

}