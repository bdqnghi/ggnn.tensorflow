void main()
{int n,a[300],i,temp;
float aver,c,b,sum=0;
scanf("%d",&n);
for (i=0;i<n-1;i++)
 scanf("%d ",&a[i]);
 scanf("%d",&a[n-1]);
for (i=0;i<n;i++)
 sum=sum+a[i];
aver=sum/n;
for(i=1;i<n;i++)
 if(a[i]>a[0])
 {temp=a[i];a[i]=a[0];a[0]=temp;}
for(i=0;i<n-1;i++)
 if(a[i]<a[n-1])
 {temp=a[i];a[i]=a[n-1];a[n-1]=temp;}

 c=a[0]-aver;b=aver-a[n-1];
 if(c>b)printf("%d\n",a[0]);
 else if(c<b)printf("%d\n",a[n-1]);
 else printf("%d,%d\n",a[n-1],a[0]);}