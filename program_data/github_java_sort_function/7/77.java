public static void shellSort(ShellSortDataWrap[] data) 
    {
        System.out.println("��ʼ����");
        int arrayLength = data.length;
        
        int h = 1;
        
        while(h <= arrayLength / 3)
        {
            h = h * 3 + 1;
        }
        while(h > 0)
        {
            System.out.println("===h��ֵ:" + h + "===");
            for (int i = h ; i < arrayLength ; i++ )
            {
                
                ShellSortDataWrap tmp = data[i];
                
                
                if (data[i].compareTo(data[i - h]) < 0)
                {
                    int j = i - h;
                    
                    for ( ; j >= 0 && data[j].compareTo(tmp) > 0 ; j-=h)
                    {
                        data[j + h] = data[j];
                    }
                    
                    data[j + h] = tmp;
                }
                System.out.println(java.util.Arrays.toString(data));
            }
            h = (h - 1) / 3;
        }
    }