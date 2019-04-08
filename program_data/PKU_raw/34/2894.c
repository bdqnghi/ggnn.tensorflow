int main()
{
 int n,m;
 scanf("%d",&n);
 while(n!=1)
 {if(n%2==0){m=n;n=m/2;printf("%d/2=%d\n",m,n);continue;}			
 if(n%2!=0&&n!=1){m=n;n=m*3+1;printf("%d*3+1=%d\n",m,n);continue;}				}
 printf("End\n");
return 0;
}