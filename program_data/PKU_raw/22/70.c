void main()
{  unsigned a[300], i,j,k ,p=0,n;
scanf("%d",&a[0]);n=a[0];
i=1;
while(getchar()==',')scanf("%d",&a[i++]);
k=i;
if(k==1)printf("No");
else 
{for(i=1;i<k;i++)
if(a[i]==a[0])p+=1;
if(p==k-1)printf("No");
if(p!=k-1)
{for(i=1;i<k;i++)
n=n>a[i]?n:a[i];
for(i=0;i<k;i++)
if(a[i]==n)
a[i]=0;n=0;
for(i=0;i<k;i++)
n=n>a[i]?n:a[i];
printf("%d",n);}
}
}
