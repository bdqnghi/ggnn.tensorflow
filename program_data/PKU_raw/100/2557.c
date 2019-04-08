int main()
{
    char c[310];
    int cishu[52]={0},i,j,k=0;
    gets(c);
    for(i=0;i<strlen(c);i++)
    {
                            if(c[i]>='A'&&c[i]<='Z')
                            cishu[c[i]-65]+=1;
                            if(c[i]>='a'&&c[i]<='z')
                            cishu[c[i]-71]+=1;
    }
    for(i=0;i<52;i++)
    {
                     if(i>=0&&i<=25&&cishu[i]>0)
                     {
                                                printf("%c=%d\n",i+65,cishu[i]);
                                                k+=1;
                     }
                     if(i>=26&&i<=51&&cishu[i]>0)
                     {
                                                 printf("%c=%d\n",i+71,cishu[i]);
                                                 k+=1;
                     }
    }
    if(k==0) printf("No");
    return 0;
}