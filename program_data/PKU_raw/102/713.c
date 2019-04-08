const int maxn=105; 
double a[maxn], b[maxn]; 

int main()
{
    char str[20], n, m, i, j, T; 
    while (scanf ("%d", &T)!=EOF)
    {
        n=0; m=0; 
        while (T--)
        {
            scanf ("%s", str); 
            if (str[0]=='m')
            {
                scanf ("%lf", a+n); 
                n++;     
            }
            else{
                scanf ("%lf", b+m); 
                m++;     
            }
        }
        sort (a, a+n); sort (b, b+m); 
        for (i=0; i<n; i++)
            printf ("%.2lf ", a[i]); 
        for (i=m-1; i>=0; i--)
        {
            printf ("%.2lf", b[i]);
            if (i) printf (" "); 
            else printf ("\n");  
        }
    } 
    return 0; 
}
