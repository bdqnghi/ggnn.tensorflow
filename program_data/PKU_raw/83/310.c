void main()
{int a[100],b[100];
float c[100];
float sum,GPA;
int n,i,j,p,d;
sum=0;
d=0;
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(j=0;j<n;j++)
scanf("%d",&b[j]);
for(p=0;p<n;p++)
{if(b[p]>=90) c[p]=4;
 if(b[p]<90&&b[p]>84) c[p]=3.7;
 if(b[p]<85&&b[p]>81) c[p]=3.3;
 if(b[p]<82&&b[p]>77) c[p]=3.0;
 if(b[p]<78&&b[p]>74) c[p]=2.7;
 if(b[p]<75&&b[p]>71) c[p]=2.3;
 if(b[p]<72&&b[p]>67) c[p]=2.0;
 if(b[p]<68&&b[p]>63) c[p]=1.5;
 if(b[p]<64&&b[p]>59) c[p]=1.0;
 if(b[p]<60) c[p]=0;}
for(p=0;p<n;p++)
{sum=sum+a[p]*c[p];
d=d+a[p];}
GPA=sum/d;
printf("%.2f",GPA);
}
