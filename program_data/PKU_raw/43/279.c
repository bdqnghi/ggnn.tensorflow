
int szs(int a); 
int main()
{
    int i,j,n,m,s;
    s=0; 
    scanf("%d",&m);
    for(i=3;i<=m/2;i+=2)
    {
        if(szs(i)&&szs(m-i))
        {
            if(s!=0) printf("\n");
            printf("%d %d",i,m-i);
            s=1; 
        }
    }

    return 0;
}
int szs(int a)
{
    int i; 
    for(i=2;i<=a/2;i++)
    {
        if(a%i==0) break;
    }
    if(i>a/2) return 1;
    else return 0;
} 
