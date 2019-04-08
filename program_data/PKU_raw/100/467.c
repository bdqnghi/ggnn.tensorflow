int main()
{
    int p=0,j,n,count[26]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,};
    char i;
    char a[301];
    scanf("%s",a);
    //printf("%s",a);
    n=strlen(a);
    for(j=0;j<n;j++)
    {
        i=a[j];
        if(i<='z'&&i>='a')
        {
           count[i-97]++;
        }
    }
    for(i='a';i<='z';i++)
    {
        if(count[i-97]!=0)
        {
            printf("%c=%d\n",i,count[i-97]);
            p++;
        }
    }   
    if (p==0)
    printf("No");
    return 0;
}
