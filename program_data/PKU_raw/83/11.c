float GPA;
gpa(int m,int a)
{
    if ( m>=90&&m<=100)
    GPA=4.0*a;
    else if ( m>=85&&m<=89)
    GPA=3.7*a;
    else if ( m>=82&&m<=84)
    GPA=3.3*a;
    else if ( m>=78&&m<=81)
    GPA=3.0*a;
    else if ( m>=75&&m<=77)
    GPA=2.7*a;
    else if ( m>=72&&m<=74)
    GPA=2.3*a;
    else if ( m>=68&&m<=71)
    GPA=2.0*a;
    else if ( m>=64&&m<=67)
    GPA=1.5*a;
    else if ( m>=60&&m<=63)
    GPA=1.0*a;
    else if ( m<60)
    GPA=0;
}
int main ()
{
    int n;
    scanf("%d",&n);
    printf("\n");
    int i,a[10],b[10];
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n");
     for (i=0;i<n;i++)
    {
        scanf("%d",&b[i]);      
    }
    printf("\n");
    float g=0;
    int sum=0;
    for (i=0;i<n;i++)
    {
        gpa(b[i],a[i]);
        g+=GPA;
        sum+=a[i];
    }
    GPA=g/sum;
    printf("%.2f",GPA);
    return 0;
}