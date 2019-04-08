int main()
{
    int n;
    double a,b,c,x1,x2,k;
    int i;
    scanf ("%d\n",&n);
    for (i=0;i<n;i++)
    {scanf ("%lf %lf %lf",&a,&b,&c);
    k = b * b - 4 * a * c ;
    if (k>0){
             printf ("x1=%.5f;x2=%.5f\n",(-b+sqrt(k))/(2*a),(-b-sqrt(k))/(2*a));
             }
    if (k==0){
              printf ("x1=x2=%.5f\n",(-b+sqrt(k))/(2*a));
              }
    if (k<0){
        if (b==0) printf ("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n",0.0,sqrt(-k)/(2*a),0.0,sqrt(-k)/(2*a));
        else printf ("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n",(-b)/(2*a),sqrt(-k)/(2*a),(-b)/(2*a),sqrt(-k)/(2*a));
             }
    }
    return 0;
    }
