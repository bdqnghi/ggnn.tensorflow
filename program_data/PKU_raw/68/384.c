
int judge(int a)
{
   int k;
   for(k=3;k*k<=a;k+=2)
   
      if(a%k==0)
      return 0;
   return 1;
}

void main()
{
   int n,j,i;
   scanf("%d\n",&n);
   for(j=6;j<=n;j+=2)
      for(i=3;i<=(j/2);i+=2)
      {
         if(judge(i)&&judge(j-i))
            {
             printf("%d=%d+%d\n",j,i,j-i);
             break;
            }
      }
return 0;
       

}