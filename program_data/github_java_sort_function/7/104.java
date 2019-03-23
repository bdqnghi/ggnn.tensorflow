   public void insert(int number){
        theArray[index++] = number;
    }
    
    public void shellSort(){
        int inner, outer;
        int temp;
        
        int h=1;
        while(h <= size/3)
            h = h*3 + 1;    
        
        
        
        while(h>0){
            for(outer = h; outer < size; outer++){
                temp = theArray[outer]; 
                
                inner = outer;
                while(inner >= h && theArray[inner-h] >= temp){
                    theArray[inner] = theArray[inner-h];
                    inner -= h;
                }
                theArray[inner] = temp;
            }
            h = (h-1)/3;
        }
    }
    