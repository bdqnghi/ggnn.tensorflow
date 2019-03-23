 
  public static void sort(double[] a)
  {
    int n = a.length;
    temp = new double[n];
    recursiveSort(a, 0, n-1);
  }

  
  private static void recursiveSort(double[] a, int from, int to)
  {
    if (to - from < 2)       
    {
      if (to > from && a[to] < a[from])
      {
        double aTemp = a[to];  
        a[to] = a[from];
        a[from] = aTemp;
      }
    }
    else                     
    {
      int middle = (from + to) / 2;
      recursiveSort(a, from, middle);
      recursiveSort(a, middle + 1, to);
      merge(a, from, middle, to);
    }
  }

  
  
  private static void merge(double[] a, int from, int middle, int to)
  {
    int i = from, j = middle + 1, k = from;

    
    while (i <= middle && j <= to)
    {
      if (a[i] < a[j])
      {
        temp[k] = a[i];   
        i++;
      }
      else
      {
        temp[k] = a[j];
        j++;
      }
      k++;
    }

    
    while (i <= middle)
    {
      temp[k] = a[i];     
      i++;
      k++;
    }

    
    while (j <= to)
    {
      temp[k] = a[j];     
      j++;
      k++;
    }

    
    for (k = from; k <= to; k++)
      a[k] = temp[k];
  }