main()
{
    double a,b,c,d,e;
    cin>>a;
    cin>>b;
    cin>>c;
    cin>>d;
    cin>>e;
    e=(e/180*3.1415926)/2;
    double s,r;
    s=(a+b+c+d)/2;
    if((s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*cos(e)*cos(e)<0)
       cout<<"Invalid input";
    else{
    r=sqrt((s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*cos(e)*cos(e));
    printf("%.4lf", r);
    }
    return(0);
}
    