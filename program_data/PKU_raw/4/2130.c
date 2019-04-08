
int main()
{
    int col, row;
    int count;
    int i, j;
    
    int array[100][100];
    
    scanf("%d %d", &row, &col);
    
    for(i = 0; i <= row - 1; i++)
          for(j = 0; j <= col - 1; j++)
                scanf("%d", &array[i][j]);
    
    
    
    
    int x = 0, y = 0;
                
    for(count = 1; count <= col; count++)
    {
              i = x;
              j = y;
              printf("%d\n", array[i][j]);
              
              while(i + 1 <= row - 1 && j - 1 >= 0)
              {
                      i = i + 1;
                      j = j - 1;
                      printf("%d\n", array[i][j]);
              }
              
              y = y + 1;
    }
    
    x = 1;
    y = col - 1;
    for(count = 2; count <= row; count++)
    {
              i = x;
              j = y;
              printf("%d\n", array[i][j]);
              
              while(i + 1 <= row - 1 && j - 1 >= 0)
              {
                      i = i + 1;
                      j = j - 1;
                      printf("%d\n", array[i][j]);
              }
              
              x = x + 1;
    }
              
    
    
  
    return 0;
}

