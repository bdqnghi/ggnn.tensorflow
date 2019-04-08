

int isPrimeNumber(int number)
{
int i;
int N = (int)sqrt((double)number);
for(i=2;i<=N;i++)
if(number%i==0)
return 0;
return 1;
}

int main()
{
int i,n;
int k=0;

scanf("%d",&n);

for(i = 2 ; i<=n; i++)
{
if(isPrimeNumber(i)==1)
{
if(isPrimeNumber(i+2)==1&&(i+2)<=n)
{
printf("%d %d\n",i,i+2);
k++;
}
}
}
if(k==0)
printf("empty");
}