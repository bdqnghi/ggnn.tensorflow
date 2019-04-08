void main()
{ float h,p,q,sum=0.0;
  long int i,n,a[300],max,min;
	scanf("%ld",&n);
	scanf("\n");
	for(i=0;i<n;i++)
		scanf("%ld",&a[i]);
for(i=0;i<n;i++)
{sum=sum+a[i];}
h=sum/n;
max=a[0];
min=a[0];
for(i=0;i<n;i++)
{if(a[i]>max)
max=a[i];
if(a[i]<min)
min=a[i];
}
p=max-h;
q=h-min;
if(p>q)
printf("%ld",max);
if(p<q)
printf("%ld",min);
if(p==q)
printf("%ld,%ld",min,max);
}