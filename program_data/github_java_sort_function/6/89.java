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
		sc.nextLine(); 
		while(sc.hasNextLine()){
			
			String s = sc.nextLine();
			
			Node<String> Node = new Node<String>(s, null);
			
			if(masterListRear == null){
				Node.next = Node;
				masterListRear = Node;
			}
			else{
				Node.next = masterListRear.next;
				masterListRear.next = Node;
				masterListRear = Node;
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
		for(int i = 0; i < buckets.length; i++){
			buckets[i] = null;
		}

		do{
			Node<String> ptr = masterListRear.next;
			masterListRear.next = masterListRear.next.next;
			char c;
			String s = ptr.data;
			if(s.length()-1-pass < 0){
				c = '0';
			}else{
				c = s.charAt(s.length()-1-pass);
			}
			
			int num = Character.digit(c, radix);
			
			if(buckets[num] == null){
				ptr.next = ptr;
				buckets[num] = ptr;
			}
			else{
				ptr.next = buckets[num].next;
				buckets[num].next = ptr;
				buckets[num] = ptr;
			}
			
			
		}while(masterListRear != masterListRear.next);
		
		char c;
		String s = masterListRear.data;
		if(s.length()-1-pass < 0){
			c = '0';
		}else{
			c = s.charAt(s.length()-1-pass);
		}
		
		int num = Character.digit(c, radix);
		
		if(buckets[num] == null){
			masterListRear.next = masterListRear;
			buckets[num] = masterListRear;
		}
		else{
			masterListRear.next = buckets[num].next;
			buckets[num].next = masterListRear;
			buckets[num] = masterListRear;
		}
	
		masterListRear = null;
		

		}
	

	 
	public void gather() {
	
		for(int i = 0; i < buckets.length; i++){
			
			if(buckets[i] == null){
				continue;
			}
			else{
				
				if(buckets[i].next != buckets[i]){
				
					do{	
						Node<String> ptr = buckets[i].next;
						buckets[i].next = buckets[i].next.next;
						
						if(masterListRear == null){
							ptr.next = ptr;
							masterListRear = ptr;
						}
						else{
							
							ptr.next = masterListRear.next;
							masterListRear.next = ptr;
							masterListRear = ptr;	
						}
					}while(buckets[i] != buckets[i].next);
				}
				
				if(masterListRear == null){
					buckets[i].next = buckets[i];
					masterListRear = buckets[i];
				}
				else{
					buckets[i].next = masterListRear.next;
					masterListRear.next = buckets[i];
					masterListRear = buckets[i];	
				}
			}
		}
	}	
	
}


	

