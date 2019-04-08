

int main()
{
    int temp;
    char m;
    int a[1001] = {0};
    int num;
    int i, j, k;
    int come[1000];
    int leave[1000];
    for(num = 0; ;num ++)
    {
          cin >> come[num];
          m = cin.get();
          if (m == '\n')
          break;
    }
    for(num = 0; ;num ++)
    {
          cin >> leave[num];
          m = cin.get();
          if (m == '\n')
          break;
    }
    for (i = 0; i <= num; i ++)
    {
         for(j = come[i]; j < leave[i]; j++)
         {
               a[j] ++;
         }
    }
    temp = a[0]; 
    for (i = 1;i <= 1000; i++)
    {
        if (a[i] >= temp)
        {
            temp = a[i];
        }
    }
    cout << num + 1<< " " << temp << endl;
    return 0;
}