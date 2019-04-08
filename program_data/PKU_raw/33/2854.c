
int main()
{
   int n;
   int i, j;
   char string[256];
 
   scanf("%d\n", &n);
   for(i = 0; i < n ; i++)
   {
       gets(string);
       for(j = 0; j < strlen(string); j++)
       {
          if(string[j] == 'A')
            printf("T");
          else if(string[j] == 'T')
            printf("A");
          else if(string[j] == 'G')
            printf("C");
          else if(string[j] == 'C')
            printf("G");
       }
       printf("\n");
    }
  return 0;
}

