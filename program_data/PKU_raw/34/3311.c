void solve(int n)
{
if(n==2)printf("2/2=1\n");
else if(n%2==0){printf("%d/2=%d\n",n,n/2);solve(n/2);}
else {printf("%d*3+1=%d\n",n,n*3+1);solve(n*3+1);}
}
void main()
{
int n;
scanf("%d",&n);
if(n==1)printf("End");
else
{solve(n);printf("End");}
}
