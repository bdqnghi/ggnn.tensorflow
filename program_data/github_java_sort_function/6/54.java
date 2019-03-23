 private Queue<Integer> sort(List<Integer> vals) {
        int maxLen = getMaxLen(vals);

        IntStream.range(0, vals.size()).forEach(i -> mainQueue.offer(vals.get(i)));

        for (int place = 1; place <= maxLen; place++) {

            while (!mainQueue.isEmpty()) {
                int value = mainQueue.poll();
                queues.get(getDigit(value, place)).offer(value);
            }

            for (Queue<Integer> queue : queues) {
                while (!queue.isEmpty()) {
                    mainQueue.offer(queue.poll());
                }
            }
        }

        return mainQueue;
    }

    public static int getMaxLen(List<Integer> vals) {
        int maxLen = 0;
        for (Integer val : vals) {
            maxLen = Math.max(maxLen, length(val));
        }
        return maxLen;
    }

    public static int length(int val) {
        return (int) (Math.log10(val)+1);
    }

    public static int getDigit(int val, int place) {
        return (int) (val % pow(10, place)) / (int) pow(10, place - 1);
    }