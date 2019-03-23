 public static double[] sort(double[] array){
        List<Double>[] lists = new List[array.length];
        int N = array.length;
        for(int i = 0; i < N; i++){
            lists[i] = new ArrayList<>();
        }
        for(int i = 0; i < N; i++){
            lists[(int)(N * array[i])].add(array[i]);
        }
        for(int i = 0; i < N; i++)
            Collections.sort(lists[i]);

        double[] sortResult = new double[array.length];
        int k = 0;
        for(int i = 0; i < N; i++)
            for(double v : lists[i])
                sortResult[k++] = v;
        return sortResult;
    }
