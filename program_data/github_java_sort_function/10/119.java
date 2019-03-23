  static int[] sort(int[] sequence, int maxValue) 
    {
        
        int[] Bucket = new int[maxValue + 1];
        int[] sorted_sequence = new int[sequence.length];
 
        for (int i = 0; i < sequence.length; i++)
            Bucket[sequence[i]]++;
 
        int outPos = 0;
        for (int i = 0; i < Bucket.length; i++)
            for (int j = 0; j < Bucket[i]; j++)
                sorted_sequence[outPos++] = i;
 
        return sorted_sequence;
    }
 
  
    static int maxValue(int[] sequence) 
    {
        int maxValue = 0;
        for (int i = 0; i < sequence.length; i++)
            if (sequence[i] > maxValue)
                maxValue = sequence[i];
        return maxValue;
    }