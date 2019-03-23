



import java.lang.*;
import java.io.*;
import java.lang.Object;
import java.io.Reader;
import java.io.BufferedReader;

public class insertionsort{
	public static void main(String[] args){
        int i;
		int j;
		 if(args.length!=1){
			System.err.println("inputfile ");
		 }
		 long startTime = System.currentTimeMillis();
		 String[] t1 = new String[50000];
		 String tempStr;
		try{
			BufferedReader orig = new BufferedReader(new FileReader(args[0]));
		

		
			String s1 = new String(orig.readLine());
			t1 = s1.split(" ");
			orig.close();
		} catch(Exception error){
			System.err.println("Error: message");
		}

		
		for (j = 1; j < t1.length; j++) { 
			tempStr = t1[j];
			i = j - 1;
			while (i >= 0) {
				if (tempStr.compareTo(t1[i]) > 0) {
				break;
				}
				t1[i + 1] = t1[i];
				i--;
			}
		t1[i + 1] = tempStr;
		}

		long endTime = System.currentTimeMillis();

		System.out.println(endTime - startTime);
   }
}