public Bubblesort() {
        super();
    
        for(int i = Input.length; i>0;i--) {
            for(k=0; k<i-1; k++) {
                if(Input[k]<Input[k+1]) {
                    temp = Input[k+1];
                    Input[k+1] = Input[k];
                    Input[k] = temp;    
                }
            }
        }
        
    
    }