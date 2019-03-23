public ArrayList<Integer> sort(int[] array)
  {
    int maxElement = getMaxElement(array);
    int[] buckets = new int[maxElement];

    for (int i=0; i<buckets.length; i++)
    {
      buckets[i]=0;
    }

    for(int value : array)
    {
      buckets[value-1]++;
    }

    ArrayList<Integer> sorted = new ArrayList<Integer>();
    for(int i=0; i<buckets.length; i++)
    {
      for(int j = 0; j < buckets[i]; j++)
      {
        sorted.add(i);
      }
    }
    return sorted;
  }

  public int getMaxElement(int[] array)
  {
    int maxElem = 0;
    for(int value: array)
    {
      if(value > maxElem)
      {
        maxElem = value;
      }
    }
    return maxElem;
  }