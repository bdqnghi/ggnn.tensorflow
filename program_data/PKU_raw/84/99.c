void main()
{
int a[100],max1,max2,n,i,*pa;
scanf("%d",&n);
for(i=0;i<n;i++)
    scanf("%d",&a[i]);
pa=a;
max1=a[0];
for(i=1;i<n;i++)
{if(a[i]>max1)
{max1=a[i];
    pa=&a[i];
}
}
*pa=0;
pa=a;
max2=a[0];
for(i=1;i<n;i++)
{if(a[i]>max2)
    max2=a[i];
}
printf("%d\n%d",max1,max2);
}
