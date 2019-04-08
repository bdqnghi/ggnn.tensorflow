int main()
{ int j,i,a[10],b[10],sum,n;
double GPA,c[10];
scanf("%d",&n);
sum=0;
for(i=0;i<=n-1;i++)
{scanf("%d ",&a[i]);
sum=sum+a[i];}
for(j=0;j<=n-1;j++)
{scanf("%d ",&b[j]);
if (b[j]>89) c[j]=4.0;
else if(b[j]>84) c[j]=3.7;
else if(b[j]>81) c[j]=3.3;
else if(b[j]>77) c[j]=3.0;
else if(b[j]>74) c[j]=2.7;
else if(b[j]>71) c[j]=2.3;
else if(b[j]>67) c[j]=2.0;
else if(b[j]>63) c[j]=1.5;
else if(b[j]>59) c[j]=1.0;
else  c[j]=0;
}
GPA=0;
for(i=0;i<=n-1;i++)
GPA=GPA+c[i]*a[i];


GPA=GPA/sum;


printf("%.2lf",GPA);
return 0;
}
