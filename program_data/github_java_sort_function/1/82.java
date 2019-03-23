public class insertionsort{
    public static void main(String[] args){
        int size=50;
        int[] arr= new int[size];
        for (int i=0;i<size;i++){
            arr[i]=(int)(Math.random()*100);
            
        }
        int temp;
        for(int pass=0;pass<size;pass++){
            for( int p=pass;p>0;p--){
                if(arr[p]<arr[p-1]){
                    temp=arr[p];
                    arr[p]=arr[p-1];
                    arr[p-1]=temp;
                }
            }
        }
        System.out.println("Sorted array:");
        for(int i=0;i<size;i++){
            System.out.println(arr[i]+" ");
        }
    }
}