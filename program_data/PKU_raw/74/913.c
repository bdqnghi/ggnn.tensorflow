void main()
{
int m,n,p,q,c,i,k,a[20],f,b[10];
k=0;
scanf("%d %d",&m,&n);
for(c=m;c>=m&&c<=n;c++)
{for(i=2;i<=c/2;i++)
if(c%i==0)
break;
if(i==c/2+1)
{f=c;
for(p=0;f>0;p++)
{b[p]=f-10*(f/10);f=f/10;}
p=p-1;
for(q=0;q<=p;q++)
if(b[q]!=b[p-q])break;
if(q==p+1)
{a[k]=c;
k=k+1;}
}
}
k=k-1;
if(k<0)printf("no");
else{
for(i=0;i<=k-1;i++)
printf("%d,",a[i]);
printf("%d",a[k]);}
}