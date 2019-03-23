public static void bucketSort(double a[], int n) {

        LinkedList<Double> buckets[] = new LinkedList[10];
        Double result[] = new Double[10];

        int count = 0;

        for(int i = 0; i < a.length; i++) {
            if(buckets[(int) (n * a[i])] == null)
                buckets[(int) (n * a[i])] = new LinkedList<Double>();
            buckets[(int) (n * a[i])].addLast(a[i]);
        }

        for(int i = 0; i < 10; i++) {
            if(buckets[i]!= null) {
                Collections.sort(buckets[i]);
            }
        }

        for(int i = 0; i < 10; i++) {
            if(buckets[i] != null) {
                for(Double val : buckets[i]) {
                    result[count++] = val;
                }
            }
        }

        for(int i = 0; i < count; i++)
            a[i] = result[i];

    }


    