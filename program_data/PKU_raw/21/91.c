void main()
{int n,i,j;
float a[300],b[300],averge,sum=0,max=0;
scanf("%d",&n);
for(i=0;i<n;i++)
{scanf("%f",&a[i]);
sum=sum+a[i];}
averge=sum/n;
for(i=0;i<n;i++)
{if(fabs(a[i]-averge)>max)
{max=fabs(a[i]-averge);
j=1;
b[j]=a[i];
continue;}
if(fabs(a[i]-averge)==max)
{j++;
b[j]=a[i];}
}

if(j==1) printf("%.0f",b[1]);
else {for(i=1;i<j;i++) printf("%.0f,",b[i]);
printf("%.0f",b[j]);}
}



