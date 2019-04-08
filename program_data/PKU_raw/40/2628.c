
int main(){
double a, b, c ,d , s ;
double S=0;
double f;
f>0&&f<360;
scanf("%lf%lf%lf%lf%lf",&a,&b,&c,&d,&f);
s = (a+b+c+d)/2;
     S = sqrt((s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*cos(f*PI/360)*cos(f*PI/360)); 
      
if(((s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*cos(f*PI/180)*cos(f*PI/180))>0)
     {printf("%.4lf\n",S) ;}

else{printf("Invalid input\n");}
return 0;
}
