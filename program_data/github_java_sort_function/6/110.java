import java.lang.Math;
import java.util.*;
import java.io.*;

public class radix{
    private LinkedQ<String> list;
    private int radixNum;
    private int number;
    private int length;

    public radix(String fileName){
	list = new LinkedQ<String>();
	try{
	    Scanner sc = new Scanner(new File(fileName));
	    radixNum = Integer.parseInt(sc.nextLine());
	    number = Integer.parseInt(sc.nextLine());
	    String first = sc.nextLine();
	    length = first.length();
	    list.enqueue(first);
	    while(sc.hasNextLine()){
		list.enqueue(sc.nextLine());
	    }
	    System.out.println("Original list: " + list);
	}
	catch(FileNotFoundException e){
	}
    }
    public static int nthD(int x, int n){
	int toReturn = (x % (int)(Math.pow(10, n))) / (int) (Math.pow(10, n-1));
	return toReturn;
    }

    public String toString(){
	String toReturn = list.toString();
	return toReturn;
    }

    public  void sort(){
	LinkedQ<String> listSort = list;
	for(int x = length-1; x >=0 ; x--){
	    listSort = pass(listSort, x);
	}
	System.out.println("\n" + "Sorted List: "+ listSort);
    }

    private LinkedQ<String> pass(LinkedQ<String> d, int index){
	ArrayList<LinkedQ<String>> listOfLists = new ArrayList<LinkedQ<String>>();
	for(int x = 0; x < radixNum; x++){
	    listOfLists.add(new LinkedQ<String>());
	}
	while(!d.isEmpty()){
	    String curr = d.dequeue();
	    char currChar = curr.charAt(index);
	    int currInt = currChar - '0';
	    listOfLists.get(currInt).enqueue(curr);
	}
	for(int x = 0;  x < radixNum; x++){
	    while (!(listOfLists.get(x)).isEmpty()){
		d.enqueue(listOfLists.get(x).dequeue());
	    }
	}
       	return d;
    }
    public static void main(String[] args){
	
	radix test1 = new radix("radix1.txt");
	test1.sort();
	System.out.println("\n");
	radix test2 = new radix("radix2.txt");
	test2.sort();
	System.out.println("\n");
	radix test3 = new radix("radix3.txt");
	test3.sort();
	System.out.println("\n" + "End of testing");
    }
}
