void main()
{
int i,n;
float b[10],y,s,a[10],x,GPA;
scanf("%d",&n);
y=0;
for(i=0;i<n;i++)
{scanf("%f",&b[i]);
 y=y+b[i];}
s=0;
for(i=0;i<n;i++)
{scanf("%f",&x);
if(x>=90&&x<=100)
   a[i]=4.0;
else if(x>=85&&x<=89)
   a[i]=3.7;
else if(x>=82&&x<=84)
   a[i]=3.3;
else if(x>=78&&x<=81)
   a[i]=3.0;
else if(x>=75&&x<=77)
   a[i]=2.7;
else if(x>=72&&x<=74)
   a[i]=2.3;
else if(x>=68&&x<=71)
   a[i]=2.0;
else if(x>=64&&x<=67)
   a[i]=1.5;
else if(x>=60&&x<=63)
   a[i]=1.0;
else if(x<=60)
   a[i]=0;
s=s+a[i]*b[i];
}
GPA=s/y;
printf("%.2lf",GPA);
}
