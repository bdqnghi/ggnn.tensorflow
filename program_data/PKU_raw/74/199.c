void main()
{
int test1(int);
int test2(int);
int m,n,x,i,k=0,f1=0,f2=0;
int r[100];
scanf("%d %d",&m,&n);
for(i=0;i<=(n-m);i++)
{
x=m+i;
f1=test1(x);
f2=test2(x);
if(f1 && f2) {r[k]=x;k++;}
}
if(k>0) 
{printf("%d",r[0]);
for(i=1;i<k;i++)
printf(",%d",r[i]);
}
else if(k==0) printf("no");
printf("\n");

}
int test1(int x)
{
int j,f1=1,s;
s=sqrt(x)+1;
for(j=2;j<s;j++)
{if(x%j==0){f1=0;break;}}
return(f1);
}
int test2(int x)
{
int n,j,s=10,f2=1;
int a[5];
if(x>9999) n=5;
else if(x>999 && x<10000) n=4;
else if(x>99 && x<1000) n=3;
else if(x>9 && x<100) n=2;
else n=1;
for(j=0;j<n;j++)
{
a[j]=(x%s)*10/s;
s=s*10;
x=x-a[j];
}
for(j=0;j<n/2;j++)
{if(a[j]!=a[n-j-1]) {f2=0;break;}}
return(f2);
}