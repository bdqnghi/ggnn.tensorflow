package com.xdc.basic.algorithm.basic.sort;

import java.util.ArrayList;
import java.util.Arrays;


public class RadixSort
{
    public static void sort(int[] n)
    {
        
        ArrayList<ArrayList<Integer>> ll = new ArrayList<ArrayList<Integer>>();
        for (int i = 0; i < 10; i++)
        {
            ll.add(new ArrayList<Integer>());
        }

        
        int maxPower = getMaxPower(n);

        
        for (int power = 0; power <= maxPower; power++)
        {
            
            distribute(n, ll, power);

            
            collect(n, ll);
        }
    }

    
    private static void collect(int[] n, ArrayList<ArrayList<Integer>> ll)
    {
        int k = 0;
        for (ArrayList<Integer> l : ll)
        {
            for (Integer i : l)
            {
                n[k] = i;
                k++;
            }
            l.clear();
        }
    }

    
    private static void distribute(int[] n, ArrayList<ArrayList<Integer>> ll, int power)
    {
        for (int i = 0; i < n.length; i++)
        {
            int digit = (n[i] / ((int) (Math.pow(10, power)))) % 10;
            ll.get(digit).add(n[i]);
        }
    }

    
    private static int getMaxPower(int[] n)
    {
        
        int max = n[0];
        for (int i = 1; i < n.length; i++)
        {
            if (n[i] > max)
            {
                max = n[i];
            }
        }

        
        int digitalCount = 0;
        while (max != 0)
        {
            digitalCount++;
            max /= 10;
        }

        return digitalCount;
    }

    public static void main(String[] args)
    {
        int[] n = new int[] { 44, 22, 46, 47, 82, 76, 96, 82, 79, 35, 8, 75, 85, 84, 78, 98, 59, 72, 81, 44 };
        RadixSort.sort(n);
        System.out.println(Arrays.toString(n));
    }
}
