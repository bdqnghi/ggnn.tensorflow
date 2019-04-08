int reverse(int num)
{
int c[6];
int i,j,k;
int w=0;
for(i=1;i<=6;i++)
{
c[i]=0;
c[i]=num%10;
num=num-c[i];
if(num==0)
break;
num=num/10;
}
for(j=1;j<=i;j++)
{
for(k=1;k<=(i-j);k++)
c[k]=c[k]*10;
}
for(k=1;k<=i;k++)
w=w+c[k];
return(w);
}
main()
{
int a[6],i,d;
for(i=0;i<=5;i++)
scanf("%d",&a[i]);
for(i=0;i<=5;i++)
{
if(a[i]>0)
{
d=reverse(a[i]);
    printf("%d\n",d);  
}
else if(a[i]==0)
printf("0\n");
else
{
d=-reverse(-a[i]);
printf("%d\n",d);
}
}
getchar();
getchar();
getchar();
getchar(); 
}
