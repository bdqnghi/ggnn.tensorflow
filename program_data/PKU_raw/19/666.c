
int main()
{
   char str[1024];
   char src[1024];
   char tar[1024];
   char tmp[1024];
   gets( str );
   gets( src );
   gets( tar );

   int cnt = 0;

   if( str[0] == ' ' )  
       putchar(str[0]);
   else
       tmp[cnt++] = str[0];

   for(int i = 1; str[i]; i++ ) {

       if( str[i-1] == ' ' && str[i] != ' ' ) {
           tmp[cnt++] = str[i];

       } else if (str[i] == ' ') {
           if( cnt > 0 ) {
               tmp[cnt] = 0;
               if( !strcmp(tmp, src) )
                   printf("%s", tar );
               else printf("%s", tmp );
               cnt = 0;
           }
         
           putchar(' ');
       } else tmp[cnt++] = str[i];
   }
   if( cnt > 0 ) {
         tmp[cnt] = 0;
         if( !strcmp(tmp, src) )
                   printf("%s", tar );
               else printf("%s", tmp );
   }
   putchar('\n');
}