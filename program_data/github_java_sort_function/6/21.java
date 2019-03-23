package apps;

import java.io.IOException;
import java.util.Scanner;
import structures.Node;


public class Radixsort {

	
	Node<String> masterListRear;
	
	
	Node<String>[] buckets;
	
	
	int radix=10;
	
	
	public Radixsort() {
		masterListRear = null;
		buckets = null;
	}
	
	
	public Node<String> sort(Scanner sc) 
	throws IOException {
		
		if (!sc.hasNext()) { 
			return null;
		}
		
		
		radix = sc.nextInt();
		buckets = (Node<String>[])new Node[radix];
		
		
		createMasterListFromInput(sc);
		
		
		int maxDigits = getMaxDigits();
		
		for (int i=0; i < maxDigits; i++) {
			scatter(i);
			gather();
		}

		return masterListRear;
		
	}
	
	
	public void createMasterListFromInput(Scanner sc) 
	throws IOException {
		while(sc.hasNext()){
			String input = sc.nextLine();
			if(masterListRear == null){
				masterListRear = new Node<String>(input, null);
				masterListRear.next = masterListRear;
			} else {
				Node<String> newLink = new Node<String>(input, null);
				newLink.next = masterListRear.next;
				masterListRear.next = newLink;
				masterListRear=newLink;
			}
		}
		masterListRear.next = masterListRear.next.next;
	}
	
	
	public int getMaxDigits() {
		int maxDigits = masterListRear.data.length();
		Node<String> ptr = masterListRear.next;
		while (ptr != masterListRear) {
			int length = ptr.data.length();
			if (length > maxDigits) {
				maxDigits = length;
			}
			ptr = ptr.next;
		}
		return maxDigits;
	}
	
	
	public void scatter(int pass) {
		
		if(masterListRear.data.length() < 4) {
			int numOfZeroes = getMaxDigits() - masterListRear.data.length();
			for(int i = 0; i < numOfZeroes; i++) {
				masterListRear.data = "0" + masterListRear.data;
			}
		}
		Node<String> ptr = masterListRear.next;
		while(ptr != masterListRear) {
			if(ptr.data.length() == 0) 
				ptr = ptr.next;
			int numOfZeroes = getMaxDigits() - ptr.data.length();
			for(int i = 0; i < numOfZeroes; i++) {
				ptr.data = "0" + ptr.data;
			}
			ptr = ptr.next;
		}
		
		Node<String> end = masterListRear;
		Node<String> front = masterListRear.next;
		
		for(Node<String> ptr2 = front; ptr2 != end; ptr2 = ptr2.next) {
			char number = ptr2.data.charAt(3 - pass);
			int bucketNumber = Character.digit(number, radix);
			Node<String> node2 = new Node<String>(ptr2.data, null);
			
			if(buckets[bucketNumber] == null) {
				buckets[bucketNumber] = node2;
			} else {
				for(Node<String> ptr3 = buckets[bucketNumber]; ptr3 != null; ptr3 = ptr3.next) {
					if(ptr3.next == null) {
						ptr3.next = node2;
						break;
					}
				}
			}
		}
		
		char rearNumber = end.data.charAt(3 - pass);
		int bucketNumber = Character.digit(rearNumber, radix);
		
		Node<String> node2 = new Node<String>(end.data, null);
		
		if(buckets[bucketNumber] == null) {
			buckets[bucketNumber] = node2;
		} else {
			for(Node<String> ptr3 = buckets[bucketNumber]; ptr3 != null; ptr3 = ptr3.next) {
				if(ptr3.next == null) {
					ptr3.next = node2;
					break;
				}
			}
		}
	}

	
	public void gather() {
		Node<String> MLptr = masterListRear.next;
		for(int i = 0; i < radix; i++) {
			Node<String> front = buckets[i];
			for(Node<String> ptr = front; ptr != null; ptr = ptr.next) {
				MLptr.data = ptr.data;
				MLptr = MLptr.next;
			}
			buckets[i] = null;
		}
		removeZeros();
	}
	
	private void removeZeros() {
		while(masterListRear.data.startsWith("0")) {
			masterListRear.data = masterListRear.data.substring(1);
		}
		
		for(Node<String> ptr = masterListRear.next; ptr != masterListRear; ptr= ptr.next) {
			while(ptr.data.startsWith("0")) {
				ptr.data = ptr.data.substring(1);
			}
		}
	}
}
	


