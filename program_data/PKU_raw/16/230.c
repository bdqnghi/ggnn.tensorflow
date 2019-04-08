int main()
{int a,n;
  scanf("%d",&n);
if(n==0) printf("%d\n",n);
else{
for(;n>0;)
  {a=n%10;
   printf("%d",a);
   n=n/10;
   }
}
printf("\n");
return 0;
}