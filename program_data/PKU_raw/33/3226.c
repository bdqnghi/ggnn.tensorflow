
void com(char seq[])
{
     int len = strlen(seq);
     int i;
     
     for(i = 0; i <= len - 1; i++)
           switch(seq[i])
           {
                         case 'A':
                              printf("T");
                              break;
                         case 'T':
                              printf("A");
                              break;
                         case 'G':
                              printf("C");
                              break;
                         case 'C':
                              printf("G");
                              break;
           }
     
     printf("\n");
}

int main()
{
    int n;
    scanf("%d\n", &n);
    
    char seq[256];
    int i;
    for(i = 1; i <= n; i++)
    {
          gets(seq);
          com(seq);
    }

    return 0;
}

