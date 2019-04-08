int main()
{
   int ah,af,i,j=0 ,len= 0,sum=0,jin=1 ,zhuan[100];
   char num[100],zhuanfu[100];
   cin>>ah;
   cin>>num;
   cin>>af;
   len = strlen(num);
   if( num[0]=='0' )
   printf("0");
   for( i = len-1;i >= 0;i--  )
   {
   if(num[i]>='a'&&num[i]<='z')
   num[i]-=87;
   if( num[i]>='A'&&num[i]<='Z' )
   num[i]-=55;
   if( num[i]>='0'&&num[i]<='9' )
   num[i]-=48;
   sum += num[i]*jin;
   jin*=ah;
   }
   while( sum != 0 )
   {
      zhuan[j]=sum%af;
      sum/=af;
      j++;
   }
   for( i = j-1;i>=0;i-- )
   {
   if( zhuan[i]>=10 )
   printf("%c",zhuan[i]+55);
   else
   printf("%d",zhuan[i]);
   }
}
