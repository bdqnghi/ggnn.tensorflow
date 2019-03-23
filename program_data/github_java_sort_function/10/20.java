public void bucketSort(double[] num)
    {
        ArrayList<PriorityQueue<Double>> bucket = new ArrayList<PriorityQueue<Double>>(num.length);
        for(int i=0;i<num.length;i++)
        {
            bucket.add(new PriorityQueue<Double>());
        }
        for(int i=0;i<num.length;i++)
        {
            int index = (int)(num[i]*num.length)%num.length;
            bucket.get(index).add(num[i]);
        }
    }