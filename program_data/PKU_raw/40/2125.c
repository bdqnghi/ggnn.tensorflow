const double pi=3.1415926; 

int main()
{
    double t , a , b , c , d , x  , s ;
    cin>>a>>b>>c>>d>>x;
    s=(a+b+c+d)/2;
    t=(s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*cos( x*pi/360 )*cos( x*pi/360 );
    if( t<0 ) cout<<"Invalid input";
     else printf("%.4f",sqrt(t));
}