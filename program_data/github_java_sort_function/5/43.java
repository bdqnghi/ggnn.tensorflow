
    private static Integer[] bubble(Integer[] integers) {
        for (int curr = 0; curr < integers.length; ++curr) {
            for (int other = curr + 1; other < integers.length; ++other) {
                if (integers[curr] > integers[other]) {
                    int tmp = integers[curr];
                    integers[curr] = integers[other];
                    integers[other] = tmp;
                }
            }
        }
        return integers;
    }