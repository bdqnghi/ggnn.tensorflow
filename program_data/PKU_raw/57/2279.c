int main()
         {
         char p[50];
         int n,i=1;
         int l;

         scanf("%d",&n);
         while(i<n+1)
                    {


                                   scanf("%s",p);

                                   l=strlen(p)-1;

                                   if(p[l]=='y')
                                   p[l]=p[l-1]='\0';

                                   if(p[l]=='r')
                                   p[l]=p[l-1]='\0';

                                   if(p[l]=='g')
                                   p[l]=p[l-1]=p[l-2]='\0';

                          printf("%s\n",p);
                          i++;
                     }
         return 0;
         }
