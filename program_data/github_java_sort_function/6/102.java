import java.io.File;
import java.io.FileNotFoundException;
import java.io.PrintWriter;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Comparator;
import java.util.Scanner;



public class Radix {

	public static void main(String[] args) throws InterruptedException {
		if (args.length < 2) {
			System.out
					.println("Please run with two command line arguments: input and output file names");
			System.exit(0);
		}

		String inputFileName = args[0];
		String outFileName = args[1];
		
		String[] data = readInData(inputFileName);
		
		String [] toSort = data.clone();
		
		sort(toSort);  
		
		toSort = data.clone();
		
		Thread.sleep(10); 

		long start = System.currentTimeMillis();
		
		sort(toSort);
		
		long end = System.currentTimeMillis();
		
		System.out.println(end - start);

		writeOutResult(toSort, outFileName);
	}

	private static String[] readInData(String inputFileName) {
		ArrayList<String> input = new ArrayList<String>();
		Scanner in;
		try {
			in = new Scanner(new File(inputFileName));
			while (in.hasNext()) {
				input.add(in.next());
			}
			in.close();

		} catch (FileNotFoundException e) {
			e.printStackTrace();
		}

		

		return input.toArray(new String[0]); 
	}

	
	private static void sort(String[] toSort) {
		int length = toSort.length;
		String[] other = new String[length];
		
		
		
		int[] counts = new int[58];
		
		for (int i = 0; i < length; i++) {
			counts[toSort[i].charAt(10)]++;

		}
		
		counts[48]--;
		
		for (int i = 49; i < 58; i++) {
			counts[i] += counts[i - 1];
		}
		
		for (int i = length - 1; i > -1; i--) {
			other[counts[toSort[i].charAt(10)]--] = toSort[i];

		}
		
		
		
		counts = new int[58];
		
		for (int i = 0; i < length; i++) {
			counts[other[i].charAt(9)]++;

		}
		
		counts[48]--;
		
		for (int i = 49; i < 58; i++) {
			counts[i] += counts[i - 1];
		}
		
		for (int i = length - 1; i > -1; i--) {
			toSort[counts[other[i].charAt(9)]--] = other[i];

		}
		
		
	}

	private static void writeOutResult(String[] sorted, String outputFilename) {
		try {
			PrintWriter out = new PrintWriter(outputFilename);
			for (String str : sorted) {
				out.println(str);
			}
			out.close();
		} catch (FileNotFoundException e) {
			e.printStackTrace();
		}
	}
}