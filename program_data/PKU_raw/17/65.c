int main()
{
     void match(char *ps, char *pf, int len);
     char a[N] = {'\0'};
     while( scanf("%s", a) == 1) {
          char b[N] = {'\0'};
          match(a, b, strlen(a));
     }
     return 0;
}

void match(char *ps, char *pf, int len)
{
     int i, flag, last, isleft, isright;
     char str[N] = {'\0'}, strf[N] = {'\0'};
     strcpy(strf, pf);
     strcpy(str, ps);
     for(i = 0; i < len; i++) {
          if(*(str + i) == '(')
               *(strf + i) = -1;
          else if( *(str + i) == ')' )
               *(strf + i) = +1;
     }

     do {
          flag = 0;
          last = 0;
          isleft = 0;
          isright = 0;
          for(i = 0; i < len; i++) {
               if (*(strf + i) == 1 && flag == 1) {
                    *(strf + i) = 0;
                    *(strf + last) = 0;
                    flag = 0;
                    isleft = 1;
               } else if(*(strf + i) == -1) {
                    flag = 1;
                    last = i;
                    isright = 1;
               }
          }
     } while(isleft && isright);
     printf("%s\n", ps);
     for(i = 0; i < len; i++) {
          if (*(strf + i) == -1)
               printf("$");
          else if (*(strf + i) == +1)
               printf("?");
          else
               printf(" ");
     }
     printf("\n");
}

