int main()
{
    int a;
    scanf("%d", &a);
    if(a%3==0)
    {
              if(a%5==0)
              {
                        if(a%7==0)
                        {
                                  printf("%d %d %d",3, 5, 7);
                                  }
                        else
                        {
                            printf("%d %d",3, 5);
                            }
                            }
               else
               {
                   if(a%7==0)
                        {
                                  printf("%d %d",3, 7);
                                  }
                        else
                        {
                            printf("%d",3);
                            }
                            }
                            }
    else
    {
        if(a%5==0)
              {
                        if(a%7==0)
                        {
                                  printf("%d %d",5, 7);
                                  }
                        else
                        {
                            printf("%d",5);
                            }
                            }
               else
               {
                   if(a%7==0)
                        {
                                  printf("%d",7);
                                  }
                        else
                        {
                            printf("n");
                            }
                            }
                            }   
return 0;
}  