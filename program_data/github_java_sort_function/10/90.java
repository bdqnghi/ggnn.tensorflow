public int[] bucketSort(int[] num, int bucketSize){
        if(num.length == 0 || num.length == 1) return num;
        
        int max = Integer.MIN_VALUE;
        int min = Integer.MAX_VALUE;
        for(int i = 0; i < num.length; i++){
            if(max < num[i]){
                max = num[i];
            }
            if(min > num[i]){
                min = num[i];
            }
        }
        System.out.println("max:" + max + ";" + " min:" + min);
        int bucketCount = ((max - min)%bucketSize == 0)? (max - min)/bucketSize :(max - min)/bucketSize +1  ;
        
        
        List<List<Integer>> intermediate = new ArrayList<List<Integer>>(bucketCount);
        System.out.println("bucketCount: " + bucketCount);

        for(int i = 0; i < bucketCount; i++){
            intermediate.add(new ArrayList<Integer>());
        }
        for(int i = 0; i < num.length; i++){
            intermediate.get((num[i] - min)/bucketSize).add(num[i]);
        }

        
        int[] res = new int[num.length];
        int j = 0;
        for(int i = 0; i < bucketCount; i++){
            int[] tmp = new int[intermediate.get(i).size()];
            int k =0;
            for (Object o : intermediate.get(i)) {
                tmp[k] = (Integer)o;
                k++;
            }
            Arrays.sort(tmp);

            for(int c = 0; c < tmp.length;c++){
                res[j] = tmp[c];
                System.out.print(res[j]+ ",");
                j++;
            }
        }

        return res;

    }


    