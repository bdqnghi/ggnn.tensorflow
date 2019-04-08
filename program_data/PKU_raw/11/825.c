int leap(int Y)
{
    if(Y%400==0)
    return 1;
    else if(Y%100==0)
    return 0;
    else if(Y%4==0)
    return 1;
    else
    return 0;
}
int main()
{
    int Y,M,D;
    scanf("%d %d %d",&Y,&M,&D);
    if(leap(Y)==0)
    {
                  if(M==1)
                  printf("%d",D);
                  if(M==2)
                  printf("%d",31+D);
                  if(M==3)
                  printf("%d",31+28+D);
                  if(M==4)
                  printf("%d",31+28+31+D);
                  if(M==5)
                  printf("%d",31+28+31+30+D);
                  if(M==6)
                  printf("%d",31+28+31+30+31+D);
                  if(M==7)
                  printf("%d",31+28+31+30+31+30+D);
                  if(M==8)
                  printf("%d",31+28+31+30+31+30+31+D);
                  if(M==9)
                  printf("%d",31+28+31+30+31+30+31+31+D);
                  if(M==10)
                  printf("%d",31+28+31+30+31+30+31+31+30+D);
                  if(M==11)
                  printf("%d",31+28+31+30+31+30+31+31+30+31+D);
                  if(M==12)
                  printf("%d",31+28+31+30+31+30+31+31+30+31+30+D);
    }
    else
    {
                  if(M==1)
                  printf("%d",D);
                  if(M==2)
                  printf("%d",31+D);
                  if(M==3)
                  printf("%d",31+29+D);
                  if(M==4)
                  printf("%d",31+29+31+D);
                  if(M==5)
                  printf("%d",31+29+31+30+D);
                  if(M==6)
                  printf("%d",31+29+31+30+31+D);
                  if(M==7)
                  printf("%d",31+29+31+30+31+30+D);
                  if(M==8)
                  printf("%d",31+29+31+30+31+30+31+D);
                  if(M==9)
                  printf("%d",31+29+31+30+31+30+31+31+D);
                  if(M==10)
                  printf("%d",31+29+31+30+31+30+31+31+30+D);
                  if(M==11)
                  printf("%d",31+29+31+30+31+30+31+31+30+31+D);
                  if(M==12)
                  printf("%d",31+29+31+30+31+30+31+31+30+31+30+D);
    }
    getchar();
    getchar();
}