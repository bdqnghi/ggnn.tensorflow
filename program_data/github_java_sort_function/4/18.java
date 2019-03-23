
    public static int []  heapsort(int [] A){
        int [] tab = new int[A.length];
        System.arraycopy(A, 0, tab, 0, A.length);
        
        for(int c=A.length-1;c>=1;c--){ 
        
        int largest ;
        int pomoc ;
        int dlugosc = (c-1)/2;
    
        for(int j = dlugosc; j>=0; j--){
            for(int i=dlugosc;i>=0;i--){
                int left = (2*i)+1;
                int right = (2*i)+2;
                if((left <=c) && (right<=c)){
            
            if(tab[right] >= tab[left]){
                largest=right;
            }
            else
            {
                largest=left;
            }
        }
        else{
            if(right>c){
                largest=left;
            }
            else{
                largest=right;
            }
        }
        
        if(tab[largest] > tab[i])
        {
            pomoc = tab[largest];
            tab[largest]= tab[i];
            tab[i]= pomoc;
            
        }
        }
        }
        
        pomoc = tab[0];
        tab[0]= tab[c];
        tab[c]= pomoc;
    
        
        
    
    }
        return tab;
    }