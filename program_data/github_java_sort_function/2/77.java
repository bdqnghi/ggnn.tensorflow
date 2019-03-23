    
    public static Vector<Integer> sort(Vector<Integer> numbers)
    {
        
        if (numbers.size() <= 1)
        {
            return numbers;
        }
        
        int middle = numbers.size()/2;
        
        Vector<Integer> left_partition = partition(numbers, 0, middle);
        Vector<Integer> right_partition = partition(numbers, middle, numbers.size());
        
        
        
        left_partition = sort(left_partition);
        right_partition = sort(right_partition);
        
        
        return merge(left_partition, right_partition);
    }
    
    
    public static Vector<Integer> partition(Vector<Integer> vector, int begIndex, int endIndex)
    {
        Vector<Integer> tmp_vector = new Vector<Integer>();
        for (int i = begIndex; i < endIndex; i++)
        {
            tmp_vector.add(vector.get(i));
        }
        return tmp_vector;
    }
    
    public static Vector<Integer> merge(Vector<Integer> v1, Vector<Integer> v2)
    {
        Vector<Integer> tmp_vector = new Vector<Integer>();
        
        int v1c = 0;
        int v2c = 0;
        
        while (v1c < v1.size() || v2c < v2.size())
        {
            
            
            if (v1c == v1.size())
            {
                tmp_vector.add(v2.get(v2c));
                v2c++;
                continue;
            }
            else if (v2c == v2.size())
            {
                tmp_vector.add(v1.get(v1c));
                v1c++;
                continue;
            }
            
            
            
            if (v1.get(v1c) <= v2.get(v2c))
            {
                tmp_vector.add(v1.get(v1c));
                v1c++;
            }
            else
            {
                tmp_vector.add(v2.get(v2c));
                v2c++;
            }
        }
        
        return tmp_vector;
    }