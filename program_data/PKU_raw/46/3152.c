int main()
{
    int array[200][200],row,col,i,j,cnt = 0,sum = 0;
    cin >> row >> col;
    for (i = 0;i < row;i++)
        for (j = 0;j < col;j++)
        {
            cin >> array[i][j];
        }
    i = 0;
    j = 0;
    while (cnt < row * col)
        {
              for (;j <= col - 1 - sum;j++)
              {
                  cnt++;
                  if (cnt <= row * col)
                  cout << array[i][j] << endl;
                  else 
                  break;
              }
                  j--;
                  i++;
                  for (;i <= row - 1 - sum;i++)
                  {
                      cnt++;
                      if (cnt <= row * col)
                      cout << array[i][j] << endl;
                      else 
                      break;
                  }
                      i--;
                      j--;
                      for (;j >= sum;j--)
                      {
                          cnt++;
                          if (cnt <= row * col)
                          cout << array[i][j] << endl;
                          else 
                          break;
                      }
                          i--;
                          j++;
                          for (;i > sum;i--)
                          {
                              cnt++;
                              if (cnt <= row * col)
                              cout << array[i][j] << endl;
                              else 
                              break;
                          }
                              i++;
                              j++;
                              sum++;
        }
    
    
    return 0;
}
