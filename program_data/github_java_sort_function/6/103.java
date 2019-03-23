package com.paul.algorithm.sort;

import java.lang.reflect.Array;
import java.util.Arrays;
import java.util.LinkedList;

public class Radix {
  
  public int[] sort(int[] items) {
    if (items.length <= 1) {
      return items;
    }
    int[] result = Arrays.copyOf(items, items.length);
    boolean flag = true;
    int mod = 1;
    while (flag) {
      flag = false;
      mod *= 10;

      @SuppressWarnings("unchecked")
      LinkedList<Integer>[] bucket = (LinkedList<Integer>[])Array.newInstance(LinkedList.class,
          10);
      for (int i = 0; i < bucket.length; i++) {
        bucket[i] = new LinkedList<>();
      }

      for (int i = 0; i < result.length; i++) {
        int remainder = result[i] % mod;
        if (mod > 10) {
          remainder = remainder / (mod / 10);
        }

        bucket[remainder].add(result[i]);

        int num = result[i] / mod;
        if (num > 0) {
          flag = true;
        }
      }

      result = new int[result.length];
      int index = 0;
      for (int i = 0; i < bucket.length; i++) {
        for (int value : bucket[i]) {
          result[index] = value;
          index++;
        }
      }
    }

    return result;
  }
}
