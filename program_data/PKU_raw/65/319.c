int main()
{
    int n,i,suma=0,sumb=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        int a,b;
        scanf("%d %d",&a,&b);
        if(b-a==1||b-a==-2)suma++;
        if(a-b==1||a-b==-2)sumb++;            
    }
    if(suma>sumb)printf("A");
    if(suma<sumb)printf("B");
    if(suma==sumb)printf("Tie");
}
