import java.util.Arrays;

public class Heapsort {
	static int[] a = {2, 8, 6,1,10,15,3,12,11};
	
	
	public static void heapsort(int[] data){
		System.out.println("배열->힙");
		
		buildMaxHeap(data);
		
		System.out.println("\n힙->배열");
		
		for(int i=data.length-1; i>0; i--){
			swap(0,i);
			
			buildMaxHeap(Arrays.copyOfRange(data, 0, i));
			System.out.println("종료\n");
		}
	}
	public static void buildMaxHeap(int[] data){
		if(data==null || data.length<1) return;
		
		int start = data.length/2;	
		
		for(int i=start; i>=0; i--){
			heapify(data, i);
		}
		System.out.println("정렬상태:"+Arrays.toString(data));
	}
	public static void heapify(int[] data, int i){

		System.out.println("i는 "+i+"일 때 힙으로 만드는 중:"+Arrays.toString(a));
		
		int left = i*2+1;
		int right = left+1;
		int largest = 0;
		
		if(left<data.length && data[left]>data[i]){
			largest = left;
		}
		else
			largest = i;
		if(right<data.length && data[right]>data[largest])
			largest = right;
		
		if(largest != i){
			swap(largest, i);
			heapify(data, largest);
		}
		if(largest==i){
			return;		}
		
	}
	
	static void swap(int x, int y){	
		int temp = a[x];
		a[x] = a[y];
		a[y] = temp;
	}
}
