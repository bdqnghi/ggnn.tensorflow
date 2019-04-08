int main()
{
int a,b=0;
scanf("%d",&a);

 while(a)
 {
  b*=10;
  b+=a%10;
  a/=10;
 }
 printf("\n%d",b);
return 0;
} 