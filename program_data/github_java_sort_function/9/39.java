
    public static List<Integer> selectionSort(List<Integer> lst){
        
        for(int passes= lst.size()-1; passes != -1; --passes){
            int posOfMax = 0;           
            for(int i=1; i != passes+1; ++i){   
                if(lst.get(i) > lst.get(posOfMax)){
                    posOfMax = i;       
                }               
            }                   
            swap(lst, passes, posOfMax);
        }
        
        return lst;
    }
    
    public static void swap(List<Integer> lst, int i, int j){
        int temp = lst.get(i);
        lst.set(i, lst.get(j));
        lst.set(j, temp);
    }