    public  static List<Integer>  sort(int[] array){
        List<Integer> out=new ArrayList<Integer>();
        Integer[] b=new Integer[1000];
        for (int i = 0; i < array.length; i++) {
            if(b[array[i]]==null){
                b[array[i]]=1;
            }else{
                b[array[i]]++;
            }
            
        }
        for (int j = 0; j < b.length; j++) {
            if(b[j]!=null){
                for (int k = 0; k< b[j]; k++) {
                    out.add(j);
                }
            }
        }
        return out;
    }