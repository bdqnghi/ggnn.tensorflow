int main ()
{
      int time[2][3], i, j, temp, flag = 0;
      while (1)
     {
          for (i = 0; i < 2; i++)
                for (j = 0; j < 3; j++)
                      { cin >> time[i][j];
                        if (time[i][j] != 0)
                            flag = 1;
                       } 
         if (!flag)
             break;
         else 
           {
                  temp = time[1][2] + time[1][1] * 60 + (time[1][0] + 12)* 3600 - time[0][2] - time[0][1] * 60 - time[0][0] * 3600;
                  flag = 0;
                  cout << temp << endl;
                  temp = 0; 
           }
     }
      return 0;
}