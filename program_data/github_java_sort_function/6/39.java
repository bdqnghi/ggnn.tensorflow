@SuppressWarnings({ "rawtypes", "unchecked" })
        
        public void radixsorter(int[] a) throws FileNotFoundException
        {
                final int RADIX = 10;
         
        
                List[] bucket = new ArrayList[RADIX];
      
                for(int i=0; i < RADIX; i++)
                {
                    bucket[i] = new ArrayList();
                }
        
                boolean maxLength = false;
                int tmp = 0;
                int place = 1;
        
                while(!maxLength)
                {
                    maxLength = true;
           
                    for(Integer i : a)
                    {
                        tmp = i / place;
                        bucket[tmp % RADIX].add(i);
                
                        if(maxLength && tmp > 0)
                        {
                        maxLength = false;
                        }
                    }
            
                    
                    int idx = 0;
                    
                    for(int b = 0; b < RADIX; b++)
                    {
                        for(int j = 0; j < bucket[b].size(); j++)
                        {
                            a[idx++] = (int) bucket[b].get(j);
                        }
                        
                        bucket[b].clear();
                    }
                    
                    place *= RADIX;
               }
       }
}