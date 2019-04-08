int a[30];
char s[100100];
void main()
{
     int g;
     int n;
     scanf("%d\n",&g);
     while(g--)
     {
               char *p;
               int *q;
               gets(s);
               if(s[0]=='\0')
               {
                             g++;
                             continue;
               }
               p=s;
               for(q=a;q<a+30;q++)
               {
                                  *q=0;
               }
               n= strlen(s);
               for(p=s;p<s+n;p++)
               {
                                 a[*p-'a']++;
               }
               int flag=0;
               q=a;
               for(p=s;p<s+n;p++)
               {
                                 if(*(q+(*p-'a'))==1)
                                 {
             //  for (q=a;q<a+30;q++)
           //    {
           //        if(*q==1)
           //        {
                            printf("%c\n",*p);
                            flag=1;
                            break;
                   }
               }
               if(!flag)
               {
                        printf("no\n");
               }
     }
}
