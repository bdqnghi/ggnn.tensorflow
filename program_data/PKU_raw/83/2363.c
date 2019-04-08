int s=0;
int g[10],p[10],n;
float grade=0;

float gpa(int x)
{
float f;
if(x>=90)f=4.0;
else if(x>=85)f=3.7;
else if(x>=82)f=3.3;
else if(x>=78)f=3.0;
else if(x>=75)f=2.7;
else if(x>=72)f=2.3;
else if(x>=68)f=2.0;
else if(x>=64)f=1.5;
else if(x>=60)f=1.0;
else f=0;
return f;
}

int main()
{
int i;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&g[i]);
s+=g[i];
}
for(i=0;i<n;i++)
{
scanf("%d",&p[i]);
}
for(i=0;i<n;i++)
{
grade+=gpa(p[i])*g[i];
}
printf("%.2f\n",grade/s);
return 0;
}
