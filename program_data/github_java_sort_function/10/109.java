public static void bucketSort(double arr[], int n)
    {
        
        ArrayList<ArrayList<Double>> b=new ArrayList<ArrayList<Double>>();
        
        for(int i=0;i<n;++i)
        {
            b.add(new ArrayList<Double>());
            
            
        }       
        
        
        for (int i=0; i<n; i++)
        {
           int bi = (int) (n*arr[i]); 
           b.get(bi).add(arr[i]);
        }
     
        
        for (int i=0; i<n; i++)
           Collections.sort(b.get(i));
     
        
        int index = 0;
        for (int i = 0; i < n; i++)
            for (int j = 0; j < b.get(i).size(); j++)
              arr[index++] = b.get(i).get(j);
    
    
    for(int i=0;i<arr.length;++i)
        System.out.println(arr[i]);
    
    }

}