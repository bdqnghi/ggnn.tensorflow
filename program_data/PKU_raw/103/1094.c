int main()
{
    char a[1000],c[1000];
    int b[1000];
    int i,j,k,h;
    for(i=0;i<1000;i++)
    {
        scanf("%c",&a[i]);
        if(a[i]>='a'&&a[i]<='z') a[i]=a[i]-'a'+'A';
        if(a[i]=='\n') break;
    }
    for(h=0,j=0;h<i;h++)
    {
        c[j]=a[h];
        if(a[h]==a[h+1])
        {
            b[j]++;
        }
        else j++;
    }
    for(k=0;k<j;k++)
        printf("(%c,%d)",c[k],b[k]+1);
    return 0;
}
