 public static void shellSort(Comparable [] a)
   {
      int incr = a.length / 2;  
      while (incr >= 1)
      {
         for (int i = incr; i < a.length; i++)
         {
            Comparable insertElement = a[i];
            int j;
            for (j = i - incr;
                 j >= 0 && insertElement.compareTo(a[j]) < 0;
                 j -= incr)
               a[j + incr] = a[j];
            a[j + incr] = insertElement;
         }
   
         
         if (incr == 2)
            incr = 1;  
         else
            incr = (int) (incr / 2.2);
      }
   }