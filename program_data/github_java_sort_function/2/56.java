public List<Integer> mergesort(List<Integer> left, List<Integer> right) {
        List<Integer> result = new ArrayList<Integer>();
        int leftSize = left.size();
        int rightSize = right.size();
        if(leftSize == 1 && rightSize==1) {
            int leftNum = left.remove(0);
            int rightNum = right.remove(0);
            
            if(leftNum<rightNum) {
                result.add(leftNum);
                result.add(rightNum);               
            } else {
                result.add(rightNum);
                result.add(leftNum);                
            }
        }
        
        List<Integer> newLeft = mergesort(left.subList(0,leftSize/2), left.subList(leftSize/2, leftSize));
        List<Integer> newRight = mergesort(right.subList(0,leftSize/2), right.subList(leftSize/2, leftSize));
        
        
        while(newLeft.size() > 0 || newRight.size() > 0) {
            if(newLeft.get(0) < newRight.get(0)) {
                result.add(newLeft.remove(0));
            } else {
                result.add(newRight.remove(0));
            }       
        }
        if(newLeft.size()!=0) {
            while(newLeft.size()>0) {
                result.add(newLeft.remove(0));
            }
        } else {
            while(newRight.size()>0) {
                result.add(newRight.remove(0));
            }
        }
        
        return result;
    }