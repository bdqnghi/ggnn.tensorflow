int main() 
{double a,b,c,x1,x2,p,q;
int n,j;
char y='i';
scanf("%d",&n);
for(j=1;j<=n;j++)
{scanf("%lf%lf%lf",&a,&b,&c);
if(b*b-4*a*c<0)
{p = b/(-2*a);q= sqrt(-b*b+4*a*c)/(2*a);
 if(p==-0){p=0;}
printf("x1=%.5lf+%.5lf%c;x2=%.5lf-%.5lf%c\n",p,q,y,p,q,y);}
if(b*b-4*a*c==0)
{x1 = (-b + sqrt(b*b-4*a*c))/(2*a);
printf("x1=x2=%.5lf\n",x1);}
if(b*b-4*a*c>0)
{x1 = (-b + sqrt(b*b-4*a*c))/(2*a);x2 = (-b - sqrt(b*b-4*a*c))/(2*a) ;
printf("x1=%.5lf;x2=%.5lf\n",x1,x2);}
}
return 0; 
}  
