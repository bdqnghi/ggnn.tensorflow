int main()
{
    int n,i,k,out;
    int A[5];
    scanf("%d",&n);
    for(i=1;1<=5;i++)
    {
        if (n<1) break; 
         printf("%d",n%10);
         n=n/10;
     
     }
 return 0;
}