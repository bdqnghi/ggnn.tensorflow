int fei (int a)
{
    int t;
    if (a==1)
    return 1;
    if (a==2)
    return 1;
    if ( a!=1 && a!=2 )
    {
         t=fei (a-1)+fei (a-2);
         return t;
    }
}
int main ()
{
    int n,i;
    int t[20];
    scanf ("%d",&n);
    for (i=0;i<n;i++)
    {
        scanf ("%d",&t[i]);
    }
    for (i=0;i<n;i++)
    {
        printf ("%d\n",fei(t[i]));
    }
    getchar ();
    getchar ();
}
    

