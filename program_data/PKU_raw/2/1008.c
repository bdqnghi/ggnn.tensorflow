
int main()
{
    int n;
    int i, j;
    int book_number[26];
    int max = 0;
    int max_n;
    int author_len;
    
    
    struct data
    {
           int number;
           char author[27];
    }input[1000];
    
    scanf("%d", &n);

    for(j = 0; j <= 25; j++)
          book_number[j] = 0;
    
    for(i = 0; i <= n - 1; i++)
    {
          scanf("%d %s", &input[i].number, input[i].author);
          author_len = strlen(input[i].author);
          
          for(j = 0; j <= author_len - 1; j++)
                book_number[input[i].author[j] - 'A']++;
    }
    
    for(j = 0; j <= 25; j++)
    {
          if(book_number[j] > max)
          {
                            max = book_number[j];
                            max_n = j;
          }
    }
    
    printf("%c\n%d\n", max_n + 'A', max);
    
    for(i = 0; i <= n - 1; i++)
    {
          author_len = strlen(input[i].author);
          
          for(j = 0; j <= author_len - 1; j++)
          {
                if(input[i].author[j] == max_n + 'A')
                {
                                      printf("%d\n", input[i].number);
                                      break;
                }
          }
    }
    return 0;
}
    
    
