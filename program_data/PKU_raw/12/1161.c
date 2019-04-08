
int main()
{
    int data[16];
    int i, j;
    int len;
    int count;
    
    while(1)
    {
                  count = 0;
                  scanf("%d", &data[0]);
                  if(data[0] == -1)
                             break;
                  
                  for(i = 1; i <= 15; i++)
                  {
                        scanf("%d", &data[i]);
                        if(data[i] == 0)
                        {
                                   len = i;
                                   break;
                        }
                  }
                  
                  for(i = 0; i <= len - 1; i++)
                        for(j = 0 ; j <= len - 1; j++)
                              count = count + (data[i] == 2 * data[j]);
                              
                  printf("%d\n", count);
    }             
                  
    
 
    return 0;
}

