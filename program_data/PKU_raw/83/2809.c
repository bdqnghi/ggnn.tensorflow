int main()
{
    int n,x[10],a[10],i,j,s1=0;
    float b,s2=0,GPA;
    scanf("%d",&n);
    for(j=0;j<n;j++)
    {
        scanf("%d",&x[j]);
        s1+=x[j];
    }
    for(i=0,j=0;i<n,j<n;i++,j++)
    { 
        scanf("%d",&a[i]);
        if(a[i]<=100&&a[i]>=90)
	   b=4.0;
        if(a[i]<=89&&a[i]>=85)
	   b=3.7;
        if(a[i]<=84&&a[i]>=82)
	   b=3.3;
        if(a[i]<=81&&a[i]>=78)
	   b=3.0;
        if(a[i]<=77&&a[i]>=75)
	   b=2.7;
        if(a[i]<=74&&a[i]>=72)
	   b=2.3;
        if(a[i]<=71&&a[i]>=68)
	   b=2.0;
        if(a[i]<=67&&a[i]>=64)
	   b=1.5;
        if(a[i]<=63&&a[i]>=60)
	   b=1.0;
        if(a[i]<60)
	   b=0;
        s2=s2+x[j]*b;
     }
     GPA=s2/s1;
     printf("%.2f",GPA);
     return 0;
}
