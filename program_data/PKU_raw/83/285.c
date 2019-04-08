void main()
{float f(int a);
int n,i,a[10],b[10];
float x=0.00,y=0.00;
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++)
scanf("%d",&b[i]);
for(i=0;i<n;i++)
{x=x+(a[i])*(f(b[i]));
y=y+a[i];}
x=x/y;
printf("%.2f",x);
}
float f(int a)
{float z;
if(101>a&&a>89)
z=4.0;
else if(90>a&&a>84)
z=3.7;
else if(85>a&&a>81)
z=3.3;
else if(82>a&&a>77)
z=3.0;
else if(78>a&&a>74)
z=2.7;
else if(75>a&&a>71)
z=2.3;
else if(72>a&&a>67)
z=2.0;
else if(68>a&&a>63)
z=1.5;
else if(64>a&&a>59)
z=1.0;
else z=0;
return(z);
}