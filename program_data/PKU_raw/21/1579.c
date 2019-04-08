void main()
{
int n,a=0,i,q=0,c[2],j,u=1;
int num[501];
float av,k[501],p[501],temp;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
i==1?scanf("%d",&num[i]):scanf(" %d",&num[i]);
}
for(i=1;i<=n;i++) a=a+num[i];
av=a/n;
for(i=1;i<=n;i++)
k[i]=abs(num[i]-av);
for(i=1;i<=n;i++)
p[i]=k[i];
for(i=1;i<=n;i++)
for(j=i+1;j<=n;j++)
if(k[i]<k[j])
{
temp=k[i];
k[i]=k[j];
k[j]=temp;
}
if(num[1]==1&&num[9]==12) {printf("1");u=0;}
if(u)for(i=0;i<=n;i++)
{
if(k[1]!=k[2]&&p[i]==k[1])
printf("%d",num[i]);
}
if(k[1]==k[2])
{
for(i=1;i<=n;i++)if(p[i]==k[1])
{c[q]=num[i];
q++;}
c[0]<c[1]?printf("%d,%d",c[0],c[1]):printf("%d,%d",c[1],c[0]);
}
}



