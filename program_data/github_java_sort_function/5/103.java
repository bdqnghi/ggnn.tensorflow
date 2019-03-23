public static void main(String[] args){
        Scanner in = new Scanner(System.in);
        int N = in.nextInt();
        int numbers[] = new int[N];
        for(int i = 0; i < N; i++){
            numbers[i] = in.nextInt();
        }

        int numberOfSwap = 0;
        for(int i = 0; i < N; i++){
            for(int j = 0; j < N-1; j++){
                if(numbers[j] > numbers[j+1]){
                    swap(numbers, j, j+1);
                    numberOfSwap++;
                }
            }
        }


    }

    static void swap(int[] array, int pos1, int pos2){
        int temp = array[pos1];
        array[pos1] = array[pos2];
        array[pos2] = temp;
    }