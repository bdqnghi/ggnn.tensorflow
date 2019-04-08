main()
{int a,b,n,c,i;
 scanf("%d",&n); 
 scanf("%d",&a);
 scanf("%d",&b);
 if(a<b){c=a;a=b;b=c;}
 for(i=1;i<=n-2;i++)
 {scanf("%d",&c);
  if(c<=b) continue;
  if(c>b&&c<=a) {b=c;continue;}
  if(c>a){b=a;a=c;}
 } 
 printf("%d\n%d\n",a,b);
}
