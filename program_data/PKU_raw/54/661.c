void main()
{ int n,k;
scanf("%d %d",&n,&k);
int i=0,j=0,b=0;
j=n-1;
do{b=j;j=j+n-1;
for(i=0;i<=n;)
{if(b%(n-1)==0)
{b=b/(n-1)*n+k;i++;}
else break;
}
if(i!=n)  continue;
else break;
}while(i!=n);
printf("%d\n",b);
}