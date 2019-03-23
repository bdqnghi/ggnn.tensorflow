 public static void shellsort() {
      int h = 1;

      do { h = (h * 3) + 1; } while (h < n);

      do {
         h /= 3;
         for(int cor = 0; cor < h; cor++){
            insercaoPorCor(cor, h);
         }
      } while (h != 1);
   }