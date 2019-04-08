void main()
{
int n,i,j,f;
int a[10];
float b[10],s=0,t=0;
scanf("%d",&n);
for(i=0;i<n;i++)
{scanf("%d ",&a[i]);};
printf("\n");
for(j=0;j<n;j++)
{
scanf("%d",&f);
if(f>89)b[j]=4.0;
else if(f>84)b[j]=3.7;
else if(f>81)b[j]=3.3;
else if(f>77)b[j]=3.0;
else if(f>74)b[j]=2.7;
else if(f>71)b[j]=2.3;
else if(f>67)b[j]=2.0;
else if(f>63)b[j]=1.5;
else if (f>59)b[j]=1.0;
else b[j]=0;};
for(i=0;i<n;i++)
{s=s+a[i]*b[i];
t=t+a[i];}
s=s/t;

printf("%.2f",s);





}