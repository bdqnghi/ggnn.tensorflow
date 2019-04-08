void main()
{
int f(int j);
int n,i,j;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&j);
printf("%d\n",f(j));

}

}
int f(int j)
{
int x=0;
if(j==1||j==2)x=1;
else x=f(j-1)+f(j-2);
return x;


}