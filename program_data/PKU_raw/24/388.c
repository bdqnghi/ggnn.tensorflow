int main()
{
    char sth[N],*p=0,*min=0,*max=0;
    int flag=0,sum=0,sum_max=0,sum_min=N;
    gets(sth);
    for(p=sth;p<=sth+strlen(sth);p++){
        if(*p==' '||*p=='\0'){
            if(flag==0)
            continue;
           if(sum>sum_max){
               max=p-sum;
               sum_max=sum;
           }
           if(sum<sum_min){
               min=p-sum;
               sum_min=sum;
           }    
           sum=0;
           flag=0;
       }
       else {
           sum++;
           flag=1;
       }
   }
   for(p=max;p<max+sum_max;p++)printf("%c",*p);
   printf("\n");
   for(p=min;p<min+sum_min;p++)printf("%c",*p);
   printf("\n");
   getchar();
   getchar();   
return 0;
}
