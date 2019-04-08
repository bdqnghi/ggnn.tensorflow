
int reverse(int num);
int main()
{
    int sz[6],i; 
    for(i=0;i<6;i++)
                    scanf("%d",&sz[i]);
    for(i=0;i<6;i++)
                    reverse(sz[i]);
   
    return 0;
}

int reverse(int num) 
{
     int start=0,temp,value;
     
     if(num==0)
               printf("0");
     else{
          if(num<0)
                   printf("-");
          value=fabs(num);
          do{
             temp=value%10;
             if(temp!=0)
                        start=1;
             if(start==1)
                         printf("%d",temp);
             value=value/10;
          }while(value>0);
     }
     printf("\n");
     return 0;
     
}
