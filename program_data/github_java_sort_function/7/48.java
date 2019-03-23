package shellsort;

public class Shellsort {
    public static void main(String args[]) {
        int[] array = new int[] { 3, 2, 5, 4, 1 };
        System.out.print("Before sorting ? ");
        for (int i1 = 0; i1 < 5; i1++) {
            System.out.print(array[i1]+" "+" ");
        }
        System.out.println("");
        int i1, i, j, increment, temp, number_of_elements = array.length;
         
         for (increment = number_of_elements / 2; increment > 0; increment /= 2)
         {
                for (i = increment; i < number_of_elements; i++)
             {
                    temp = array[i];
                        for (j = i; j >= increment; j -= increment) 
                    {
                            if (temp < array[j - increment]) {
                                array[j] = array[j - increment];
                            } else {
                                break;
                            }
                        }
                       array[j] = temp;
            }
        }
         System.out.print("After Sorting  ? :");
        for (i1 = 0; i1 < 5; i1++) {
            System.out.print(array[i1]+" "+" ");
        }
    }
}
