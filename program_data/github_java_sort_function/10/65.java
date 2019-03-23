public static void bucketSort(double array[]) {
        int length = array.length;
        ArrayList arrList[] = new ArrayList[length];
        
        
        for (int i = 0; i < length; i++) {
            
            int temp = (int) Math.floor(10 * array[i]);
            if (null == arrList[temp])
                arrList[temp] = new ArrayList();
            arrList[temp].add(array[i]);
        }
        
        for (int i = 0; i < length; i++) {
            if (null != arrList[i]) {
                
                
                
                Collections.sort(arrList[i]);
            }
                
        }
        
        int count = 0;
        for (int i = 0; i < length; i++) {
            if (null != arrList[i]) {
                Iterator iter = arrList[i].iterator();
                while (iter.hasNext()) {
                    Double d = (Double) iter.next();
                    array[count] = d;
                    count++;
                }
            }
        }
    }

    
    