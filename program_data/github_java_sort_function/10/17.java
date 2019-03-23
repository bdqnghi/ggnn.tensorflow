void bucketSort(List<Integer> arrayList,int k){
        
        
        boolean finish = false;
        
        
        List<Integer> bits = new ArrayList<Integer>();
        
        
        for(int i=0;i<arrayList.size();i++){
            bits.add(arrayList.get(i)%k);
        }
        
        System.out.println("bits is:"+bits);
        
        
        int pow = k;
        int pow_count = 1;
        
        
        while(!finish){
            
            
            for(int i=0;i<bits.size();i++){
                for(int j=i;j<bits.size();j++){
                    if(bits.get(i)>bits.get(j)){
                        
                        
                        int tempBit;
                        tempBit = bits.get(i);
                        bits.set(i, bits.get(j));
                        bits.set(j, tempBit);
                        
                        
                        int tempSort;
                        tempSort = arrayList.get(i);
                        arrayList.set(i, arrayList.get(j));
                        arrayList.set(j, tempSort);
                    }
                }
            }
            System.out.println("bits is:"+bits);
            System.out.println("arrayList is:"+arrayList);
            
            
            pow = (int) Math.pow(k, pow_count);
            
            
            for(int i=0;i<bits.size();i++){
                bits.set(i, (int)(arrayList.get(i)/pow));
            }
            System.out.println("bits is:"+bits);
        
            for(int i=0;i<bits.size();i++){
                bits.set(i, bits.get(i)%k);
            }
            System.out.println("bits is:"+bits);
            
            
            pow_count++;
            
            
            
            int count = 0;
            
            for(int i=0;i<bits.size();i++){
                if(bits.get(i) == 0){
                    count++;
                }
            }
            
            if(count == bits.size()){
                finish = true;
            }
            
            System.out.println("finish is:"+finish);
            
        }
        
    }
    