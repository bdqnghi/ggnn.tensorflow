void main()
{
int a[10],b[10],n,i,j,d=0;
float c[10],e=0.0,GPA;
scanf("%d\n",&n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
scanf("\n");
for(i=0;i<n;i++)
scanf("%d",&b[i]);

for(j=0;j<n;j++)
  {if(b[j]>=90&&b[j]<=100) c[j]=4.0;
   else if(b[j]>=85&&b[j]<=89) c[j]=3.7;
   else if(b[j]>=82&&b[j]<=84) c[j]=3.3;
   else if(b[j]>=78&&b[j]<=81) c[j]=3.0;
   else if(b[j]>=75&&b[j]<=77) c[j]=2.7;
   else if(b[j]>=72&&b[j]<=74) c[j]=2.3;
   else if(b[j]>=68&&b[j]<=71) c[j]=2.0;
   else if(b[j]>=64&&b[j]<=67) c[j]=1.5;
   else if(b[j]>=60&&b[j]<=63) c[j]=1.0;
   else c[j]=0.0;
    d=d+a[j];
    e=e+c[j]*a[j];
   }
GPA=e/(d+0.0);
printf("%.2f",GPA);
}