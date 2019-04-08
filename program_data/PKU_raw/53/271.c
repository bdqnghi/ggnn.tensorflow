
int main ()
{   
    int a[100], tag[100];
    int i, j;
    int n;
    
    scanf("%d", &n);
    
    for (i = 0; i < n; i++)
      scanf ("%d", &a[i]);

    for (i = 0; i < n; i++)
    {
    if (i==0)
      { printf ("%d", a[0]);
       continue;}
        for (j = 0; j < i; j++)
        {
            if (a[i] == a[j])
            {
                tag[i] = 1;
                break;
            }

        }
         if (tag[i]!= 1)

                printf (",%d", a[i]);

    }
    }