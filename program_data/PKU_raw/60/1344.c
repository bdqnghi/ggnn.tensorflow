
int main()
{
int n,i,j,a;
scanf("%d",&n);
if(n<5)
printf("empty");
else
{for(i=3;i<=n-2;i++,a=1)
{
for(j=2;j<=i/2;j++)
{if(i%j==0||(i+2)%j==0)
   {a=0;break;}}
  if(a){printf("%d %d\n",i,i+2);}
   

}
}
}
