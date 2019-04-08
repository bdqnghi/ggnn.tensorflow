int main()
{
    int w,i,a[15],sum=0;
    scanf("%d",&w);
    for(i=1;i<13;i++){
        if(i==1||i==3||i==5||i==7||i==8||i==10||i==12)
          a[i]=31;
         else if(i==4||i==6||i==9||i==11) 
          a[i]=30;
          else 
           a[i]=28;
        if(i==1)
          sum+=13;
         else
         sum+=a[i-1]; 
         if((sum+w-1)%7==5)
            printf("%d\n",i);                
    }
}
