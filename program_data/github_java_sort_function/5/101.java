public void sortValue() {
        int in, out;

        for (out = nElement - 1; out > 0; out--) {
            for (in = 0; in < out; in++) {
                if (arrLong[in] < arrLong[in + 1])
                    swap(in, in + 1);
            }
        }
    }

    public void swap(int one, int two) {
        long temp = arrLong[one];
        arrLong[one] = arrLong[two];
        arrLong[two] = temp;
    }