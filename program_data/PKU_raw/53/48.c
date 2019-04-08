void main()
{int n;
scanf("%d",&n);
int a[300];
int i,j,m=0;
for(i=0;i<n;i++)
scanf("%d",&a[i]);
int b[300]={0};
for(i=0;i<n;i++)
{int t=1;
for(j=0;j<300;j++) {if(b[j]==a[i]) t=0;}
if(t==1) {b[m]=a[i];m++;}
}
printf("%d",b[0]);
for(i=1;i<m;i++) if(b[i]!=0) printf(",%d",b[i]);
}