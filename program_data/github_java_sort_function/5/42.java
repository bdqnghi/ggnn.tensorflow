 public static void main(String[] args) {

        for (int i = 0; i < bubbleSort.length; i++) {

            for (int j = 0; j < bubbleSort.length - i - 1; j++) {

                int temp;
                if(bubbleSort[j] > bubbleSort[j + 1]){

                    temp = bubbleSort[j];
                    bubbleSort[j] = bubbleSort[j + 1];
                    bubbleSort[j + 1] = temp;
                }

            }
        }

  }
     