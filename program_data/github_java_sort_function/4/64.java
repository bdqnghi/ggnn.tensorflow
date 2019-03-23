import java.util.Arrays;
class SortingHeap{

void heapify(int arr[],int size,int i)
{
	int swapwith=i;
	int l=2*i+1;
	int r=2*i+2;
	
	
	
	if(l<size && arr[l]>arr[swapwith]) 
	{
		swapwith=l;
	}
	if(r<size && arr[r]>arr[swapwith]) 
	{
		swapwith=r;
	}	
	
	if(swapwith != i)
	{
		int tmp =arr[i];
		arr[i] = arr[swapwith];
		arr[swapwith] = tmp;

		heapify(arr,size,swapwith); 
	}	
		
}	
void sort(int arr[],int size)
{
	for(int i=(size/2)-1;i>=0;i--)
	{
		
		heapify(arr,size,i);
	}
	
	for (int i=size-1; i>=0; i--)
    {
        
        
		int tmp =arr[0];
		arr[0] = arr[i];
		arr[i] = tmp;
		
		
        
        heapify(arr, i, 0);
    }	
	 
	 
		 
		 
		 
		
		 
	 
}
}
