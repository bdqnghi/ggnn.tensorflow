  public static String advancedBubble(int[] numbers, boolean isDescending) {
        if (isDescending = true) {
            Arrays.sort(numbers);
            for (int i = 0; i < numbers.length / 2; i++) {
                int temp = numbers[i];
                numbers[i] = numbers[numbers.length - 1 - i];
                numbers[numbers.length - 1 - i] = temp;
            }
        } else {
            Arrays.sort(numbers);
            }
        return Arrays.toString(numbers);
    }