    
    private static int[] insertSort(int[] seq, boolean isASC) {
        int[] tmp_seq = new int[seq.length];
        System.arraycopy(seq, 0, tmp_seq, 0, seq.length);
        for (int i = 1; i < tmp_seq.length; i++) {
            int tmp = tmp_seq[i];
            int j = i - 1;
            while (j >= 0 && (isASC? (tmp_seq[j] > tmp) : (tmp_seq[j] < tmp))) {
                tmp_seq[j + 1] = tmp_seq[j];
                j--;
            }
            tmp_seq[j + 1] = tmp;
        }
        return tmp_seq;
    }
