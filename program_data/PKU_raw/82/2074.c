int main()
{
    int n,i,sou[max],su[max],a=0,h[max],m;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d%d",&(sou[i]),&(su[i]));
    }
    for(i=0;i<n;i++)
    if((sou[i]>=90)&&(sou[i]<=140)&&(su[i]>=60)&&(su[i]<=90))
    {
        a++;
        h[i]=a;
    }else{
        h[i]=0;
        a=0;
    }
    m=h[0];
    for(i=0;i<n;i++)
    {
        if(m<h[i]){
            m=h[i];
        }
    }
    printf("%d",m);
    return 0;
}
