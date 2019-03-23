class selection-sort{
public static int findMin(int[] array, int index)
{
    int min = index - 1;
    if (index < array.length - 1)
        min = findMin(array, index + 1);
    if (array[index] < array[min])
        min = index;
    return min;
}

public static void selectionSort(int[] array)
{
    selectionSort(array, 0);
}

public static void selectionSort(int[] array, int left)
{
    if (left < array.length - 1)
    {
        swap(array, left, findMin(array, left));
        selectionSort(array, left+1);
    }
}

public static void swap(int[] array, int index1, int index2)
{
    int temp = array[index1];
    array[index1] = array[index2];
    array[index2] = temp;
}



}
