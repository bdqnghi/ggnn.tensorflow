public static void radixSort(int[] arr){
        int radix = getRadix(arr);
        sort(arr, radix);
    }

    private static void sort(int[] arr, int radix){
        
        List<List<Integer>> list = new ArrayList<List<Integer>>();
        for(int i = 0; i < 10; i ++){
            List<Integer> item = new ArrayList<>();
            list.add(item);
        }

        
        for(int i = 0; i < radix; i ++){
            
            for(int j = 0; j < arr.length; j ++){
                int index = arr[j] % (int)Math.pow(10, i+1) / (int)Math.pow(10, i);
                list.get(index).add(arr[j]);
            }
            
            int count = 0;
            for(int k = 0; k < 10; k ++){
                if(list.get(k).size() > 0){
                    for(int temp : list.get(k)){
                        arr[count] = temp;
                        count ++;
                    }
                    
                    list.get(k).clear();
                }
            }
        }
    }

    
    