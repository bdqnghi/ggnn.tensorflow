 public List<Integer> sort(List<Integer> list){

        
        
        
        int n = list.size();
        
        while(n != 0){
            
            int swappy = 0;
            for (int i = 1;i<n;i++){
                
                if(list.get(i-1) > list.get(i)){
                    int temp = list.get(i-1);
                    list.set(i-1,list.get(i));
                    list.set(i,temp);
                    
                    swappy = i;
                }
            }
            
            n = swappy;
        }
        return list;
    }