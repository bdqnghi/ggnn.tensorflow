int main()
{
int x,y,a[10000],b[10000],i,j,k,p;
scanf("%d %d",&x,&y);
if(x==y)
printf("%d",x);
else
{
a[1]=x;
b[1]=y;
for(i=2;;i++)
{
if(a[i-1]==1)
break;
else if(a[i-1]%2==0)
a[i]=(a[i-1]/2);
else a[i]=((a[i-1]-1)/2);
}
for(j=2;;j++)
{
if(b[j-1]==1)
break;
else if(b[j-1]%2==0)
b[j]=(b[j-1]/2);
else b[j]=((b[j-1]-1)/2);
}
for(k=i-1,p=j-1;;k--,p--)
if(a[k]!=b[p])
break;
printf("%d",a[k+1]);
}
}