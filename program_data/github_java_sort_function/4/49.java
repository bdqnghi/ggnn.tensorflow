
    public int[] heapSort(int[] num){
        Comparator<Integer> comparator = new IntegerDescendingComparator();

        if(num.length == 0 || num.length == 1) return num;
        int[] res = new int[num.length];
        PriorityQueue pq = new PriorityQueue(comparator);
        for(int i = 0; i < num.length; i++){
            pq.add(num[i]);
        }
        for(int i = 0; i < num.length;i++){
            int tmp = (Integer)pq.remove();
            res[i] = tmp;
            System.out.print(res[i]+ ",");
        }

        return res;

    }