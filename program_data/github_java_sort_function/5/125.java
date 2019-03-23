int [] sort(int array[])
            {
                for(int index=0;index<array.length;index++)
                {
                    for(int index2=index+1;index2<array.length;index2++)
                    {
                        if(array[index]>array[index2])
                        {
                            int temp=array[index];
                            array[index]=array[index2];
                            array[index2]=temp;
                        }
                    }
                }
                return array;
        
            }