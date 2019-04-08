int s(int a)
{
int i,k,j;
k=sqrt(a);
for(i=2;i<=k;i++)
  if(a%i==0) break;
if(i>k) j=1;
else j=0;
return(j);
}
int h(int m)
{
int k,temp,n=0;
temp=m;
 while(temp>0)
  { k=temp%10;
  n=n*10+k;
  temp=temp/10;}
if(m==n) k=1;
else k=0;
return(k);
}
void main()
{
int m,n,x,a[305],i=0,j;
scanf("%d %d",&m,&n);
for(x=m;x<=n;x++)
 {if(s(x)==1&&h(x)==1) {a[i]=x;i++;}
 else continue;}
if(i==0) printf("no");
else 
  {printf("%d",a[0]);
  for(j=1;j<i;j++)
    printf(",%d",a[j]);}
}