int main()
{
int n;
scanf("%d",&n);
while(n!=1)
{if(n%2==0) {n=n/2;printf("%d/2=%d\n",2*n,n);}
else {n=3*n+1;printf("%d*3+1=%d\n",(n-1)/3,n);}
}
 printf("End");
return 0;
}