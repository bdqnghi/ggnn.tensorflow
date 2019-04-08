void main()
{int n;
scanf("%d",&n);
long int a[200];
int i,t,x;
for(i=0;i<n;i++) scanf("%d",&a[i]);
t=a[i];x=0;
for(i=0;i<n;i++) {if(a[i]>t) {t=a[i];x=i;}}
a[x]=a[0];
a[0]=t;
t=a[1];x=1;
for(i=1;i<n;i++) {if(a[i]>t) {t=a[i];x=i;}}
a[x]=a[1];
a[1]=t;
printf("%d\n%d\n",a[0],a[1]);
}