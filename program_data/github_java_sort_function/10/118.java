
    public void bucketSort(int[] array) {
        List<Integer> list[] = (LinkedList<Integer>[]) new LinkedList[10];
        for(int i = 0; i < list.length; i++) {
            list[i] = new LinkedList<Integer> ();
        }
        for(int i = 0; i < array.length; i++) {
            int count = array[i] / 10;
            insert(list[count], array[i]);
        }
        int count = 0;
        for(int i = 0; i < list.length; i++) {
            for(int j = 0; j < list[i].size(); j++) {
                array[count++] = list[i].get(j);
            }
        }
    }
    public void insert(List<Integer> list, int num) {
        for(int i = list.size() - 1; i >= 0; i--) {
            if(list.get(i) > num) {
                i--;
            }
            else {
                list.add(i + 1, num);
                return;
            }
        }
        list.add(0, num);
    }