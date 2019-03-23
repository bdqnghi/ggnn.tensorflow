public ArrayList<Integer> bucketSort(int[] array){

        ArrayList<Integer> result = new ArrayList<>();
        int min = array[0];
        int max = array[0];
        int bucket = 10;

        for(int i =1;i<array.length;i++){
            if(array[i] > max)
                max = array[i];
            if(array[i] < min)
                min = array[i];

        }

        
        int divider =(int) Math.ceil((max+1)/bucket);
        
        List<ArrayList<Integer>> bucketList = new LinkedList<ArrayList<Integer>>();

        for(int i=0;i<10;i++){
            bucketList.add(new ArrayList<Integer>());
        }


        int i=0;





        ArrayList<Integer> arrayList ;
        for(int h=0;h<array.length;h++){

            int index = array[h]/divider;
            if(bucketList.get(index) == null){
                bucketList.add(index,new ArrayList<Integer>(Arrays.asList(array[h])));
                
            }
            else {
                bucketList.get(index).add((Integer) array[h]);
            }
            

        }

        for (ArrayList<Integer> al :
                bucketList) {
            arrayList = al;

            int[] arrayInsertSort = new int[arrayList.size()];
            for(int a=0;a<arrayList.size();a++){
                arrayInsertSort[a] = arrayList.get(a).intValue();
            }
            InsertionSort insertionSort = new InsertionSort();
            int[] insertSortResult = insertionSort.sortIt(arrayInsertSort);

            for (int ele :
                    insertSortResult) {
                result.add(ele);
            }


        }





        return result;

    }

    public int[] bucketSort2(int[] array){
        int i,j,k;
        
        int[] bucket = new int[10];

        for(j=0;j<bucket.length;j++){
            bucket[j] = 0;
        }

        for(i=0;i<array.length;i++){
            ++bucket[array[i]];
        }

        for(i=0,j=0;j<bucket.length;j++){
            for(k= bucket[j];k>0;--k){
                array[i++] = j;
            }
        }
        return array;
    }

    