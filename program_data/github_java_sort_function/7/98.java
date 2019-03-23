  public void shellSort(){
        int inner, outer;
        long temp;
        int h =1;
        while (h <= nElems/3){
            h = h*3 + 1;
        }
        while(h>0){
            for(outer = h; outer<nElems; outer++){
                temp = theArray[outer];
                inner = outer;
                while(inner> h-1 && theArray[inner-h] <= temp){
                    theArray[inner] = theArray[inner-h];
                    inner -= h;
                }
                theArray[inner] = temp;
            }
            h = (h-1) / 3;
        }
    }