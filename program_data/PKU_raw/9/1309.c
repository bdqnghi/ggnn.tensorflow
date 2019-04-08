struct Patient
{
       char id[10];
       int age;
       int num;
}patient[100];
int main ()
{
    int n;
    int a,b,c;
    scanf ("%d", &n);
    int i,j,k=0;
    for (i=0;i<=n-1;i++)
    {
        scanf ("%s %d", &patient[i].id, &patient[i].age);
        patient[i].num = i;
    }
    int s[100];
    for (i=0;i<=99;i++)
    {
        s[i]=i;
    }
    for (i=0;i<=n-2;i++)
    {
        for (j=0;j<=n-2;j++)
        {
            if (patient[s[j]].age<patient[s[j+1]].age)
            {
                                                a=s[j];
                                                s[j]=s[j+1];
                                                s[j+1]=a;
            }
        }
    }
    for (i=0;i<=n-1;i++)
    {
        if (patient[i].age>=60)
        k=k+1;
    }
    for (i=0;i<=k-2;i++)
    {
        for (j=0;j<=k-2;j++)
        {
            if (s[j]>s[j+1] && patient[s[j]].age==patient[s[j+1]].age)
            {
                                                a=s[j];
                                                s[j]=s[j+1];
                                                s[j+1]=a;                                                
            }
        }
    }
    
    for (i=k;i<=n-2;i++)
    {
        for (j=k;j<=n-2;j++)
        {
            if (s[j]>s[j+1])
            {
                            a=s[j];
                            s[j]=s[j+1];
                            s[j+1]=a;
            }
        }
    }
    
    for (i=0;i<=n-1;i++)
    {
        printf ("%s\n", patient[s[i]].id);
    }
    
    return 0;
}
    
                                                
                                                
                                                
    
           
    
