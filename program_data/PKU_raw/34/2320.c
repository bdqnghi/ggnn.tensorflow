
void main ()
{
int n,n1,i,j,k;
scanf("%d",&n);
if(n==1) printf("End\n");


if(n!=1)
{
do
{
if(n%2==1)
{
n1=n*3+1;
printf("%d*3+1=%d\n",n,n1);
n=n1;
}
if(n%2==0)
{
n1=n/2;
printf("%d/2=%d\n",n,n1);
n=n1;
}
}while(n!=1);
printf("End\n");
}
}