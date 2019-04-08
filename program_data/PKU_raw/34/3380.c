void main()
{
int a,b;
scanf("%d",&a);
for(a=a;a!=1;)
{
 if(a%2==0){b=a/2;printf("%d/2=%d\n",a,b);a=b;}
else if(a%2!=0){b=a*3+1;printf("%d*3+1=%d\n",a,b);a=b;}
}if(a==1)printf("End");
}