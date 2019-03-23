
package arraysortrecursive;



       
  
public class ArraySortRecursive
{
public static final int MIN_SIZE = 5; 



public static <T extends Comparable<? super T>>
void mergeSort(T[] a, int n) 
{
mergeSort(a, 0, n - 1); 
} 
public static <T extends Comparable<? super T>>
void mergeSort(T[] a, int first, int last) 
{

@SuppressWarnings("unchecked")
T[] tempArray = (T[])new Comparable<?>[a.length]; 
mergeSort(a, tempArray, first, last); 
} 


private static <T extends Comparable<? super T>> void mergeSort(T[] a, T[] tempArray, int first, int last) 
{
if (first < last)
{ 
int mid = first + (last - first) / 2; 
mergeSort(a, first, mid);	
mergeSort(a, mid + 1, last);	
if (a[mid].compareTo(a[mid + 1]) > 0) 
merge(a, tempArray, first, mid, last); 

} 
} 

private static <T extends Comparable<? super T>>void merge(T[] a, T[] tempArray, int first, int mid, int last)
{

int beginHalf1 = first;
int endHalf1 = mid;
int beginHalf2 = mid + 1;
int endHalf2 = last;


int index = beginHalf1; 
for (; (beginHalf1 <= endHalf1) && (beginHalf2 <= endHalf2); index++)
{ 
if (a[beginHalf1].compareTo(a[beginHalf2]) < 0)
{
tempArray[index] = a[beginHalf1];
beginHalf1++;
}
else
{
tempArray[index] = a[beginHalf2];
beginHalf2++;
} 
} 


for (; beginHalf1 <= endHalf1; beginHalf1++, index++)

tempArray[index] = a[beginHalf1];

for (; beginHalf2 <= endHalf2; beginHalf2++, index++)

tempArray[index] = a[beginHalf2];

for (index = first; index <= last; index++)
a[index] = tempArray[index];
} 

    
  
}

