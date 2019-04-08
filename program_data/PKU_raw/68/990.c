
int prime(int n)            
{
 int i;
 for (i=2;i<=(int)sqrt(n); i++)
 {   if (n%i==0) 
	   return 0;
 }
 return 1;
}
int main(int argc, char* argv[])
{
 int i,j;
 int n;
 scanf("%d",&n);
 for (i=6;i<=n;i+=2)
    for (j=3;j<i;j++) 
	{
     if (prime(j)&&prime(i-j)) 
	 {
        printf("%d=%d+%d\n",i,j,i-j);
      break;
     }
    }
 return 0;
}