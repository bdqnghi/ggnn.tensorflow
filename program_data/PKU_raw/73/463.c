int main()
{
 int i, j, k, h, a[5][5], c, d, e = 0;
 for(i = 0;i <= 4;i++)
 {for(j = 0;j <= 4;j++)
  {cin >> a[i][j];}
  }
 for(i = 0;i <= 4;i++)
 {for(j = 0;j <= 4;j++)
  {c = 0;
   d = 0;
   for(k = 0;k <= 4;k++)
   {if(a[i][j] < a[i][k])
    {c = c + 1;} 
   }
   for(h = 0;h <= 4;h++)
   {if(a[i][j] > a[h][j])
    {d = d + 1;}
    }
   if(c == 0&&d == 0)
   {cout << i + 1 << " " << j + 1<< " " << a[i][j] << endl;
    e = e + 1;}
   }
  }
  if(e == 0)
  {cout << "not found" << endl;}
 return 0;
}
  