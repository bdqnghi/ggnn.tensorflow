

int main()
{
   int x[1000] = {0}, y[1000] = {0};
   int i, j, mm, k, m;
   int num[1000] = {0};
   char ch;
   cin >> x[0] >> ch;
   i = 0;
   while(ch == ',')
   {
     i ++;
     cin >> x[i];
     ch = cin.get();
   }
   cin >> y[0] >> ch;
    j = 0;
   while(ch == ',')
   {
     j ++;
     cin >> y[j];
     ch = cin.get();
   }
   for(k = 0; k <= i; k++)
   {
       for(m = x[k]; m < y[k]; m++)
        num[m] ++;
   }
   mm = 0;
   for(k = 0; k < 1000; k++)
    {
        if(num[k] > mm)
            mm = num[k];
    }
    cout << i+1 << " " << mm << endl;

    return 0;
}
