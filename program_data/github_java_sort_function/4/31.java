    void heapSort(AnyType[] a){

        
        for(int i = a.length/2-1; i>=0; i--){
            percDown(a,i,a.length);
        }
        
        
        for(int i = a.length-1; i>0; i--){
            swapReferencec(a,0,i);
            
            
            percDown(a,0,i);
        }
    }

    
    private static <AnyType extends Comparable<? super AnyType>>
    void percDown(AnyType[] a, int i, int n) {

        int child;
        AnyType tmp;

        for(tmp = a[i]; leftChild(i)<n; i=child){
            child = leftChild(i);
            
            
            if(child != n-1 && a[child].compareTo(a[child+1])<0){
                child++;
            }
            if(tmp.compareTo(a[child])<0){
                a[i] = a[child];
                
                
            }else
                break;
        }
        a[i]=tmp;

    }

    
    private static int leftChild(int i) {
        return 2*i+1;
    }

    private static <AnyType extends Comparable<? super AnyType>>
    void swapReferencec(AnyType[] a, int i, int j) {
        AnyType tmp;
        tmp = a[i];
        a[i] = a[j];
        a[j] = tmp ;
    }