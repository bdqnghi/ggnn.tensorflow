
    static void ShellInsertSort(int a[], int n, int dk)  
    {  
        for(int i= dk; i<n; ++i){  
            if(a[i] < a[i-dk]){          
                int j = i-dk;     
                int x = a[i];           
                a[i] = a[i-dk];         
                while(x < a[j]){     
                    a[j+dk] = a[j];  
                    j -= dk;             
                    
                    if(j<0) break;
                }  
                a[j+dk] = x;            
            }  
            printArray(a, n,i );  
        }  

    }  
