int main()
{
   int n;
   scanf("%d",&n);
   int num[6];
   num[0]=(n-n%100)/100;
   n=n-num[0]*100;
   num[1]=(n-n%50)/50;
   n=n-num[1]*50;
   num[2]=(n-n%20)/20;
   n=n-num[2]*20;
   num[3]=(n-n%10)/10;
   n=n-num[3]*10;
   num[4]=(n-n%5)/5;
   n=n-num[4]*5;
   num[5]=n;
   for(int i=0;i<6;i++)
   {
      printf("%d\n",num[i]);
   }  
   
    return 0;
}
