    public static void sortAscending(int[] data){
    
        int marker, markerValue, inner;
        if(data == null)
            throw new NullPointerException();
        
        for(marker = 1; marker<data.length;marker ++)
        {
            markerValue = data[marker];
            
            for(inner = marker;inner>0 ; inner--)
            {
                if(markerValue < data[inner-1])
                    data[inner]=data[inner-1];
                else
                    break;
                    
                    
            }
            data[inner] = markerValue;

            
            
        }
        
        
    }