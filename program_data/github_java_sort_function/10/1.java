    public double[] bucketsort(double[] arr) {
        int n=arr.length;
        double[] A =new double[n];
        ArrayList<Double>[] B=new ArrayList[n];
        for (int i = 0; i < n; i++) {
            B[i]=new ArrayList<Double>();
        }
        for (int i = 0; i < n; i++) {
            B[(int) Math.floor(n*arr[i])].add(arr[i]);
        }
        int j=0;
        for (int i = 0; i < n; i++) {
            Collections.sort(B[i]);
            for (int k = 0; k < B[i].size(); k++,j++) {
                A[j]=B[i].get(k);
            }
        }
        return A;
        
    }
    