main()
{int n,i,k,j,x,y,max;
scanf("%d",&n);
int a[26],b[26];
for(i=n-1;i>=0;i--)
scanf("%d",&a[i]);
b[0]=1;
i=0;
while(i<=n-1)
{j=0;
x=0; 
while(j<i)
{if(a[j]<=a[i])
{
if(b[j]>=x)
x=b[j];}
j++;
}
b[i]=x+1;
i++	;
}
max=1;
for(i=0;i<=n-1;i++)
if(b[i]>=max)
max=b[i];
printf("%d",max);
} 