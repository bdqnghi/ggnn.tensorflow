
    public static void bubbleSort(int[] numbers) {

        int temp = 0;

        for (int i = 0; i < numbers.length; i++) {
            for (int j = 1; j < (numbers.length - i); j++) {

                if (numbers[j - 1] > numbers[j]) {
                    
                    temp = numbers[j - 1];
                    numbers[j - 1] = numbers[j];
                    numbers[j] = temp;

                }
            }
        }
    }