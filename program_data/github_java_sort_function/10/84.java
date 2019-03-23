public static void sort(double [] arr){
        int n=arr.length;
        
        List<Double> [] B=new LinkedList[n];
        for (int i=0;i<n;i++){          
            B[i]=new LinkedList<Double>();              
        }
        
        for(int i=0;i<n;i++){
            int index=(int) (n*arr[i]);
            B[index].add(arr[i]);
        }
        
        for(int i=0;i<n;i++){
            if(B[i]!=null){
            Collections.sort(B[i]);
            }
        }
        
        int k=0;
        for (int i=0;i<n;i++){
            int j=0;
                while(B[i]!=null && j<B[i].size()){
                    
                    arr[k++]=(double) B[i].get(j);
                    j++;
                }
            
        }
        show(arr);
    }