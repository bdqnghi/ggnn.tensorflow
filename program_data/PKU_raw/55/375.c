int main()
{
    int a,b;
    char num1[32];
    int num2[32]={0};
    long num;
    int i,lenth;
    scanf("%d %s %d",&a,num1,&b);
    for(lenth=0;num1[lenth]!='\0';lenth++)
        {
         if(num1[lenth]<='9')num1[lenth]-='0';
         else num1[lenth]-='A'-10;
         if(num1[lenth]>=35)num1[lenth]-=32;
         }
    for(i=1,num=num1[0];i<lenth;i++)
       num=num*a+num1[i];          
    for(i=31;num>=b;i--)
         {
          num2[i]=num%b+1;
          num/=b;
         }
    num2[i]=num+1;     
    for(i=0;i<32;i++)
       {
         if(num2[i]==0)continue;
         else if(num2[i]<10)printf("%d",num2[i]-1);      
         else printf("%c",num2[i]+'A'-11);
       }
    return 1;
}        
