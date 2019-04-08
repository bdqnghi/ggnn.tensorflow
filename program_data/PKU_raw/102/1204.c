
int main ()
{
    int n,i,z,y,j;
    scanf("%d",&n);
    double c[n];
    struct ppp
    {
    char a[6];
    double b;
    }p[n+2];
    for (i=1;i<=n;i++)
    {
        scanf("%s%lf",p[i].a,&p[i].b);
    }
    for(i=1;i<=n;i++)
    {
                     for (j=1;j<n;j++)
                     {
                         if (p[j].b>p[j+1].b)
                         {
                                             p[0]=p[j];
                                             p[j]=p[j+1];
                                             p[j+1]=p[0];
                         }
                     }
    }
    z=0;
    y=n-1;
    for(i=1;i<=n;i++)
    {
                     if (strcmp(p[i].a,"male")==0)
                     {
                                        c[z]=p[i].b;
                                        z++;
                     }
                     else
                     {
                         c[y]=p[i].b;
                         y--;
                     }
    }
    for (i=0;i<n;i++)
    {
        if (i!=0)
        printf (" ");
        printf ("%.2lf",c[i]);
        
    }
    

    return 0;
}
