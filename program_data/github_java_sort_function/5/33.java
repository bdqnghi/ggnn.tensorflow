    public static int[] CrunchifyBubbleSortAsceMethod(int[] crunchifyArr) {
        int temp;
        for (int i = 0; i < crunchifyArr.length - 1; i++) {
 
            for (int j = 1; j < crunchifyArr.length - i; j++) {
                if (crunchifyArr[j - 1] > crunchifyArr[j]) {
                    temp = crunchifyArr[j - 1];
                    crunchifyArr[j - 1] = crunchifyArr[j];
                    crunchifyArr[j] = temp;
                }
            }
            log("Iteration " + (i + 1) + ": " + Arrays.toString(crunchifyArr));
        }
        return crunchifyArr;
    }
 