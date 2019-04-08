int main()
{
    int a[5], b[5] = {0, 1, 2, 3, 4}, z, q, s, l, i, j, k;
    char c[5] = {' ', 'z', 'q', 's', 'l'};
    for (z = 10; z <= 50; z += 10)
      for (q = 10; q <= 50; q += 10)
        for (s = 10; s <= 50; s += 10)
        {
            l = z + q - s;
            if ((l < 10) || (l > 50)) continue;
            if ((z + l > s + q) && (z + s < q)) 
              {
                   a[1] = z; 
                   a[2] = q;
                   a[3] = s;
                   a[4] = l;
                   }
            }
    for (i = 3; i >= 1; i--)
      for (j = 1; j <= i; j++)
        if (a[b[j]] < a[b[j+1]]) 
        {k = b[j]; b[j] = b[j+1]; b[j+1] = k;}
    for (i = 1; i <= 4; i++)
      cout << c[b[i]] << ' ' << a[b[i]] << endl;
    return(0);
}