main()
{
      char a[3000][50],end[5]="end";int i=-1;
      do
      {
           i++;
           gets(a[i]);
      }
      while(a[i][0]!='e');
      i--;
      while(i>=0)
      {
      puts(a[i]);
      i--;
      }
}
