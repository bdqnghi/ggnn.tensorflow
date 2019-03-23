    public static int[] swap(int numbers[], int i, int j) {
        int temp = numbers[i];
        numbers[i] = numbers[j];
        numbers[j] = temp;
        return numbers;
    }

    public static int[] sort(int numbers[]) {
        int currentMin = intmin;
        int currentindex = -1;
        for (int i = 0; i < numbers.length - 1; i++) {
            for (int j = i; j < numbers.length; j++) {
                if (numbers[j] < currentMin) {
                    currentMin = numbers[j];
                    currentindex = j;
                }
            }
            numbers = swap(numbers, i, currentindex);
            currentindex = -1;
            currentMin = intmin;
        }
        return numbers;
    }