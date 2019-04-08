int main()
{int i,n;
float a,b,c,d;
double disc,x1,x2,rpart,ipart;
scanf("%d",&n);
for(i=1;i<=n;i++)

{scanf("%f %f %f",&a,&b,&c); 
disc=b*b-4*a*c;
d=-b/(2*a);
if(fabs(disc)<=1e-6)
{printf("x1=x2=%.5lf\n",d);
}
else 
if(disc>1e-6)
{x1=(-b+sqrt(disc))/(2*a); 
x2=(-b-sqrt(disc))/(2*a); 
printf("x1=%.5lf;x2=%.5lf\n",x1,x2);
}
else
{rpart=-b/(2*a);
ipart=sqrt(-disc)/(2*a);
printf("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n",rpart,ipart,rpart,ipart); 
}
}
return 0;
}
