
int amount(int,int,int);

int main()
{
    int monkey,discard;
    scanf("%d%d",&monkey,&discard);
    printf("%d\n",amount(monkey,monkey,discard));

    return 0;
}

int amount(int n,int mk,int dc)
{
    int m=0,judge=0;
    int old,now=0,i;
    while(judge==0){
                    m++;
                    old=m+mk;
                    for(i=0;i<n;i++){
                                     if(old/(mk-1)*(mk-1)<old){
                                                               judge=0;
                                                               continue;
                                                               }
                                     else
                                         judge=1;
                                     now=old/(mk-1)*mk+dc;
                                     old=now;
                                     }
    }
    
    /*if(n>1)
            return amount(n-1,mk,dc)/(mk-1)*mk+dc;
    else
        return mk+dc;*/
    return now;
}
    
