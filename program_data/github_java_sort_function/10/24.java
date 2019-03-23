  public static int[] bucketSort(int [] tab){
        double bucketSize;
        ArrayList<ArrayList<Integer>> buckets = new ArrayList<>();
        if(tab.length<=1000){
            bucketSize = Integer.MAX_VALUE;
        }else{
            bucketSize  = Double.valueOf(2147483647000.0/tab.length);
        }
        for(int i = 0; i<tab.length/1000+1; i++){
            buckets.add(new ArrayList<Integer>());
        }

        System.out.println("Allocating numbers to buckets...");

        for(int i=0; i<tab.length; i++){
            for(int j=0; j<=tab.length/1000; j++){
                if(tab[i]>=j*bucketSize && tab[i]<=(j+1)*bucketSize){
                    buckets.get(j).add(tab[i]);
                    break;
                }
            }
        }
        System.out.println("Sorting buckets...");
        for(ArrayList ar: buckets){
            threads t = new threads(ar);
            t.start();
            
        }

        int[] tabs = new int[tab.length];
        ArrayList<Integer> ar = new ArrayList<>();

        System.out.println("Joining buckets...");

        for(ArrayList arr: buckets){
            ar.addAll(arr);
        }

        for(int i = 0; i<tabs.length; i++){
            tabs[i]=ar.get(i);
        }
        System.out.println("Sorting complete!");
        return tabs;

    }