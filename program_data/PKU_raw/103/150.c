int main()
{
    char n[1000];
    int x[1000],a,b,c,i,j,k,t=0;
    scanf("%s",n);
    i=0;
    for(j=0;j<1000;j++)
    {
                       x[j]=0;
                    if(n[j]!=0)i++;
                    else break;
    }
    for(j=0;j<i;j++)
    {
                    if((n[j]>='a')&&(n[j]<='z'))
                    n[j]=n[j]-32;
    }
    j=0;
    for(j=0;j<i;j++)
    {
                    while(n[j]==n[j+1])
                    {
                                       for(k=j;k<i;k++)
                                       n[k]=n[k+1];
                                       i--;
                                       x[t]++;
                    }
                    t++;
    }
    for(j=0;j<t;j++)
                    printf("(%c,%d)",n[j],x[j]+1);
}

