void main()
{
int sushu(int x);
int circle(int y);
int i,j,k,n,m,t;
int a[1000]={0};
scanf("%d %d",&n,&m);
for(i=n,j=0;i<=m;i++)
  if(sushu(i)==0&&circle(i)==0)
	  {a[j]=i;
	  j++;}
  if(j==0)
	  printf("no");
  else {
for(t=0,k=0;t<=j;t++)
 if(a[t]!=0&&a[t]!='\0')
	{ printf("%d",a[t]);
       k++;
      if(k<j)
		  printf(",");}
}
}

int sushu(int x)
{
int i,j,k,flag;
flag=0;
for(i=2;i<x;i++)
  if(x%i==0)
  {   flag=1;
	  break;}
  return(flag);
}

int circle(int y)
{
int i,j,k,flag;
flag=0;
int a[100];
for(i=0;y>0;i++)
{a[i]=y%10;
y=y/10;}
for(j=0;j<=(i-1)/2;j++)
   if(a[j]!=a[i-1-j])
   {
   flag=1;
   break;}
return(flag);
}