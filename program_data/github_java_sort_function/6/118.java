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
		
		Node<String> tmp = masterListRear;
		
		
		
		int maxDigits = getMaxDigits();
		System.out.println("Works after setting maxDigit to" + maxDigits);
		for (int i=0; i < maxDigits; i++) {
			scatter(i);
			gather();
		}
		System.out.println("Works after sorting CLL");
		return masterListRear;
	}

	
	public void createMasterListFromInput(Scanner sc)
	throws IOException {
		
		
		Node<String> numNode;
		while(sc.hasNext()){
			numNode = new Node<String>(sc.nextLine(),null);
			
			if(masterListRear == null){
				masterListRear = numNode;
				masterListRear.next = masterListRear;
			}
			else{
				Node<String> current = masterListRear;
				while (current.next !=masterListRear){
					current = current.next;
				}
				current.next = numNode;
				numNode.next = masterListRear;
			}
		}
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
		
		System.out.println("Got into scatter");		
		Node<String> ptr = masterListRear;
		System.out.println("Ptr is set to " + ptr.data);
		int digitVal = 0;
		while(ptr.next!=masterListRear){
			if(pass<ptr.data.length()){
				digitVal = Character.digit(ptr.data.charAt((ptr.data.length())-(pass+1)),radix);
				if(buckets[digitVal]==null)
					buckets[digitVal] = ptr;
				else{
					if (buckets[digitVal].next == null)
						buckets[digitVal].next = ptr;
					else{
						Node<String> current = buckets[digitVal];
						while(current.next != null){
							current = current.next;
						}
						current.next = ptr;
					}
				}
				ptr = ptr.next;
			}
			else{
				if(buckets[0]==null)
					buckets[0] = ptr;
				else{
					if (buckets[0].next == null)
						buckets[0].next = ptr;
					else{
						Node<String> current = buckets[0];
						while(current.next != null){
							current = current.next;
						}
						current.next = ptr;
					}
				}
				ptr = ptr.next;
			}
		}
		if(ptr.next ==masterListRear){
			if(pass<ptr.data.length()){
				digitVal = Character.digit(ptr.data.charAt((ptr.data.length())-(pass+1)),radix);
				if(buckets[digitVal]==null)
					buckets[digitVal] = ptr;
				else{
					if (buckets[digitVal].next == null)
						buckets[digitVal].next = ptr;
					else{
						Node<String> current = buckets[digitVal];
						while(current.next != null){
							current = current.next;
						}
						current.next = ptr;
					}
				}
				ptr = ptr.next;
			}
			else{
				if(buckets[0]==null)
					buckets[0] = ptr;
				else{
					if (buckets[0].next == null)
						buckets[0].next = ptr;
					else{
						Node<String> current = buckets[0];
						while(current.next != null){
							current = current.next;
						}
						current.next = ptr;
					}
				}
				ptr = ptr.next;
			}
		}
		
	}

	
	public void gather() {
		
		masterListRear = null;
		Node<String> ptr;
		Node<String> lastEntered = null;
		for(int i = 0;i<buckets.length;i++){
			ptr = buckets[i];
			if(ptr == null){continue;}
			else{
				if(masterListRear == null){
					masterListRear = ptr;
					masterListRear.next = masterListRear;
					lastEntered = ptr;
					ptr = ptr.next;
				}
				Node<String> current = masterListRear;
				while(ptr !=null){
					if(current.next == masterListRear){
						current.next = ptr;
						current.next.next = masterListRear;

					}
					else{
						lastEntered.next = ptr;
						lastEntered.next.next = masterListRear;
					}
					lastEntered = ptr;
					ptr = ptr.next;
				}
			}
		}
	}
}


