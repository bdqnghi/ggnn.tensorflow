int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if((a%100!=0&&a%4==0)||(a%400==0))
    {
                                      if(b==1)
                                      printf("%d",c);
                                     else if(b==2)
                                      printf("%d",c+31);
                                      else if(b==3)
                                      printf("%d",c+60);
                                      else if(b==4)
                                      printf("%d",c+91);
                                       else if(b==5)
                                      printf("%d",c+121);
                                       else if(b==6)
                                      printf("%d",c+152);
                                       else if(b==7)
                                      printf("%d",c+182);
                                       else if(b==8)
                                      printf("%d",c+213);
                                       else if(b==9)
                                      printf("%d",c+244);
                                       else if(b==10)
                                      printf("%d",c+274);
                                       else if(b==11)
                                      printf("%d",c+305);
                                      else printf("%d",c+335);
    }
    else
    {
                                      if(b==1)
                                      printf("%d",c);
                                     else if(b==2)
                                      printf("%d",c+31);
                                      else if(b==3)
                                      printf("%d",c+59);
                                      else if(b==4)
                                      printf("%d",c+90);
                                       else if(b==5)
                                      printf("%d",c+120);
                                       else if(b==6)
                                      printf("%d",c+152);
                                       else if(b==7)
                                      printf("%d",c+181);
                                       else if(b==8)
                                      printf("%d",c+212);
                                       else if(b==9)
                                      printf("%d",c+243);
                                       else if(b==10)
                                      printf("%d",c+273);
                                       else if(b==11)
                                      printf("%d",c+304);
                                      else printf("%d",c+334);
    }
    getchar();
    getchar();
}