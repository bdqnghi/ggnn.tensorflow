int an1[MAX_LEN+10];
int an2[MAX_LEN+10];
char szLine1[MAX_LEN+10];
char szLine2[MAX_LEN+10];

int main()
{
    scanf("%s", szLine1);
    scanf("%s", szLine2);
    int i, j;
    memset( an1, 0, sizeof(an1));
    memset( an2, 0, sizeof(an2));
     int nLen1 = strlen( szLine1);
     j = 0;
     for( i = nLen1 - 1;i >= 0 ; i --)
          an1[j++] = szLine1[i] - '0';

     int nLen2 = strlen(szLine2);
     j = 0;
     for( i = nLen2 - 1;i >= 0 ; i--)
          an2[j++] = szLine2[i] - '0';

     for( i = 0;i < MAX_LEN ; i ++ )
     {
         an1[i] += an2[i];
         if( an1[i] >= 10 )
         {
                 an1[i] -= 10;
                 an1[i+1] ++;
         }
     }

     char bStartOutput = false;
     for( i = MAX_LEN; i >= 0; i-- )
     {
          if( bStartOutput)
              printf("%d", an1[i]);
          else if( an1[i] ) {
               printf("%d", an1[i]);
               bStartOutput = true;
          }
     }
     if(!bStartOutput)
          printf("0");

     
     return 0;
}
