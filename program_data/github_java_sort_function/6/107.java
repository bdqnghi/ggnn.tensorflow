import java.util.LinkedList;
public class radixsort{
static void distribute(LinkedList[] digits,int[] numbers,String digitype){
    int i;
    for ( i=0;i<50;i++){
        if(digitype.equals("ones")){
            digits[(numbers[i]%10)].addLast(numbers[i]);
            
        }
        else{
           digits[(numbers[i]/10)].addLast(numbers[i]); 
        }
    }
}
static void collect(LinkedList[] digits,int[] numbers){
    int p=0;
    for(int l=0;l<10;++l){
        while(!digits[l].isEmpty()){
            numbers[p++]=(int)digits[l].removeFirst();
            
        }
    }
}

}