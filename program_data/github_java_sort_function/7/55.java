public static int[] shellSort(int[] data){
          int lenD = data.length;
          int inc = lenD/2;
          while(inc>0){
            for(int i=inc;i<lenD;i++){
              int tmp = data[i];
              int j = i;
              while(j>=inc && data[j-inc]>tmp){
                data[j] = data[j-inc];
                j = j-inc;
              }
              data[j] = tmp;
            }
            inc = (inc /2);
          }
          return data;
        }