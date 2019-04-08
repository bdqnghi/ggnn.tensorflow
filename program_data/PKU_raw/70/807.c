int main()
{

    int n=0,i=0,a=0,b=0;
    double d=0,s=0;
    double x[5000],y[5000];
    cin>>n;
    for(i=0;i<n;i++)
        cin>>x[i]>>y[i];


    for(a=0;a<n-1;a++)
    {
             
             for(b=a+1;b<n;b++)
             {
                  s=sqrt((x[a]-x[b])*(x[a]-x[b])+(y[a]-y[b])*(y[a]-y[b]));
                  if(d<s)
                      d=s;
                   
             }
    }
    printf("%.4f\n",d);       
return 0;
}