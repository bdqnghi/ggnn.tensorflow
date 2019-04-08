int main()
{
    int m,i,r[max]={100,50,20,10,5,1},p[max];
    scanf("%d",&m);
    for(i=0;i<max;i++)
    {
        p[i] =m/r[i];
        m=m%r[i];    
    }
    for(i=0;i<max;i++)
     {
         printf("%d\n",p[i]);
     }
     return 0;
}
