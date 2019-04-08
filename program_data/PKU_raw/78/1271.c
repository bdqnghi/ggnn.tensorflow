int main()
{
    int i, j, t;
    char m;
    int weight[4];
    char name[5] = {"zqsl"};
    for ( weight[0] = 1; weight[0] <= 5 ;weight[0]++ )
        for ( weight[1] = 1; weight[1] <= 5 ;weight[1]++ )
            for ( weight[2] = 1; weight[2] <= 5 ;weight[2]++ )
                for ( weight[3] = 1; weight[3] <= 5 ;weight[3]++ )
                    if (  (weight[3] != weight[1]) && (weight[3] != weight[0]) && 
                          (weight[3] != weight[2]) && (weight[1] != weight[0]) && (weight[2] != 
                          weight[1]) && (weight[2] != weight[0]))
                             if ((weight[0] + weight[1]) == (weight[2] + weight[3]))
                                if ((weight[0] + weight[3]) > (weight[2] + weight[1]))
                                   if ( (weight[0] + weight[2]) < weight[1] )
                                   {
                                      for ( i = 0; i < 3; i++ )
                                          for ( j = i + 1; j < 4; j++ )
                                              if ( weight[i] < weight[j] )
                                              {
                                                   t = weight[i];
                                                   weight[i] = weight[j];
                                                   weight[j] = t;
                                                   m = name[i];
                                                   name[i] = name[j];
                                                   name[j] = m;
                                              }
                                      for ( i = 0; i < 4; i++ )
                                          cout << name[i] << " " << weight[i] * 10 << endl;
                                   }
    return 0;
}