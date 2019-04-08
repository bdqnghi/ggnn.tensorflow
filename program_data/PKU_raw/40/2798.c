

int main()
{
    void area(double  a, double b, double c, double d, double e);
    double a, b, c, d, e;
    
    
    scanf("%lf%lf%lf%lf%lf", &a, &b, &c, &d, &e);
      
    
    area(a, b, c, d, e);
    
        return 0;
}

void area(double a, double b, double c, double d, double e)
{
    double temp;
    
    double s;
    s = (a + b + c + d) / 2;
    
    temp = (s - a) * (s - b) * (s - c) * (s - d) - a * b * c * d * pow(cos(e / 360 * 3.1415926), 2);
    
    if(temp < 0)
                    printf("Invalid input");
    else
                    printf("%.4lf", sqrt(temp));
}
        
    
    
    
