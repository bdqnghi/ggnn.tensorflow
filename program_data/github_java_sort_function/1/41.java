 public void sort(int[] values) {
        
        if (values ==null || values.length==0){
            return;
        }
        this.numbers = values;
        for(int i = 1; i < numbers.length; i++) {
           int j = i;
           int value = numbers[i];

           while(j > 0 && (numbers[j-1] > value))     {
               numbers[j] = numbers[j-1];
               j--;
           }

           numbers[j] = value;
        }
        for(int n=0; n< numbers.length; n++) {
            System.out.print(numbers[n] + ", ");
        }
    }