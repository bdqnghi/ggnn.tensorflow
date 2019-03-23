import java.util.*;

class BSorting{
    public static void main(String[]args){
     

        for(int i = 0; i <= numbers.length - 1; i++){
            for(int j = 0; j < numbers.length - 1; j++){
                if(numbers[j] > numbers[j + 1]){
                    int temp = numbers[j];
                    numbers[j] = numbers[j + 1];
                    numbers[j + 1] = temp;
                }
            }
        
        }

   
    }
}
