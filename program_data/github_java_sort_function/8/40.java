 
    public static void quickSort(ArrayList<Integer> ar){
        
        int n = ar.size();
        ArrayList<Integer> left = new ArrayList<Integer>();
        ArrayList<Integer> right = new ArrayList<Integer>();
        
        int value = ar.get(0);
        int l=0, r=0, c=1;
        for(int i=1; i<n; i++){
            if(ar.get(i) > value){
                right.add(ar.get(i));
                r++;
            }else if(ar.get(i) < value){
                left.add(ar.get(i));
                l++;
            }else{
                c++;
            }
        }
        if(left.size()>1){
            quickSort(left);
            for(int i=0; i<l; i++){
                System.out.print(left.get(i)+" ");
            }
            System.out.println();
        }
        if(right.size()>1){
            quickSort(right);
            for(int i=0; i<r; i++){
                System.out.print(right.get(i)+" ");
            }
            System.out.println();
        }
        int count = 0;
        for(int i=0; i<l; i++){
            ar.set(count++, left.get(i));
        }
        for(int i=0; i<c; i++){
            ar.set(count++, value);
        }
        for(int i=0; i<r; i++){
            ar.set(count++, right.get(i));
        }
        return;
    }