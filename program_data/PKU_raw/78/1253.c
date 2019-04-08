int main()
{
    int z, q, s, l;
    for(z = 1; z <= 5; z++)
        for(q = 1; q <= 5; q++)
           for(s = 1; s <= 5; s++)
              for(l = 1; l <= 5; l++)
              {
                  if((z + q == s + l) && (z + l > s + q) && (z + s < q))
                  {
                       int a[4] = {z, q, s, l}, b[4] ={z, q, s, l}, i, j, k, p;
                       char c[4] = {'z', 'q', 's','l'};
                       for(j = 1; j <= 3; j++)
                        {
                            for(i = 0; i <= 3 - j; i++)
                            {
                                if(a[i] < a[i + 1])
                                {
                                    p = a[i];
                                    a[i] = a[i + 1];
                                    a[i + 1] = p;
                                 }
                             }
                         }

                       for(i = 0; i <= 3; i++)
                       {
                            for(k = 0; k <= 3; k++)
                            {
                                if(a[i]==b[k])
                                cout  << c[k] << " " << 10 * a[i] <<endl;
                            }

                        }
                    }
               }
      return 0;
}

