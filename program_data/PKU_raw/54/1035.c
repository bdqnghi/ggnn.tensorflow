/*??????????????????????*/
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
                    old=mk*m+dc;
                    for(i=0;i<n-1;i++){
                                     if(old/(mk-1)*(mk-1)<old){
                                                               judge=0;
                                                               break;
                                                               }
                                     else
                                         judge=1;
                                     now=old/(mk-1)*mk+dc;
                                     old=now;
                                     }
    }
    return now;
}
    