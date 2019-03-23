    public static int[] swap(int numbers[], int i, int j) {
        int temp = numbers[i];
        numbers[i] = numbers[j];
        numbers[j] = temp;
        return numbers;
    }

    public static int[] sort(int numbers[]) {
        for (int i = 0; i < numbers.length; i++) {
            for (int j = 0; j < numbers.length - 1; j++) {
                if (numbers[j + 1] < numbers[j]) {
                    numbers = swap(numbers, j, j + 1);
                }
            }
        }
        return numbers;
    }
