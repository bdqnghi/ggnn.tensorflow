int main()
{int i,j,n,s,t,a[301];
char c;
scanf("%d",&a[1]);
n=1;
for(i=2;i<=300;i++)
{c=getchar();
n=i-1;
if(c=='\n')
break;
scanf("%d",&a[i]);}
for(j=1;j<=n-1;j++)
for(i=1;i<=n-j;i++)
if(a[i]>a[i+1])
{t=a[i]; a[i]=a[i+1]; a[i+1]=t;}
t=a[n];
for(j=n-1;j>=1;j--)
if(a[j]<t)
{t=a[j];
break;}
if(t==a[n])
printf("No");
else printf("%d",t);
return 0;
}