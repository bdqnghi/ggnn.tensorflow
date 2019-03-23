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
		
		masterListRear = new Node<String>(sc.next(),null);
		masterListRear.next = masterListRear;
		while(sc.hasNext()){
			Node<String> tmp = new Node<String>(sc.next(), null);
			tmp.next = masterListRear.next;
			
			masterListRear.next = tmp;
			
			masterListRear = tmp;
			
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
		
		Node<String> prev;
		Node<String> tmp;
		Node<String> buckTmp = null; 
		for(int i = 0; i < radix; i++){
			prev = masterListRear;
			tmp = masterListRear.next;
			buckets[i] = null;
			while(tmp!=masterListRear){
			if(buckets[i]==null){
				if(tmp.data.length()-1-pass<0){
					prev.next = tmp.next;
					buckets[i] = tmp;
					tmp.next = tmp;
					tmp = prev.next;
					buckTmp = buckets[i];
				}else if(Character.digit(tmp.data.charAt(tmp.data.length()-1-pass),radix)==i){
					prev.next = tmp.next;
					buckets[i] = tmp;
					tmp.next = tmp;
					tmp = prev.next;
					buckTmp = buckets[i];
				}else{
					prev = prev.next;
					tmp = tmp.next;
				}
			}else{
				if(tmp.data.length()-1-pass<0){
					prev.next = tmp.next;
					buckets[i].next = tmp;
					tmp.next = buckTmp;
					buckets[i] = tmp;
					tmp = prev.next;
				}else if(Character.digit(tmp.data.charAt(tmp.data.length()-1-pass),radix)==i){
					prev.next = tmp.next;
					buckets[i].next = tmp;
					tmp.next = buckTmp;
					buckets[i] = tmp;
					tmp = prev.next;
					
				}else{
					prev = prev.next;
					tmp = tmp.next;
				}

				
			  }
			
			}
			
			if(buckets[i]==null){
				if(tmp.data.length()-1-pass<0){
					prev.next = tmp.next;
					buckets[i] = tmp;
					tmp.next = tmp;
					tmp = prev.next;
					masterListRear = prev;
					buckTmp = buckets[i];
				}else if(Character.digit(tmp.data.charAt(tmp.data.length()-1-pass),radix)==i){
					prev.next = tmp.next;
					buckets[i] = tmp;
					tmp.next = tmp;
					tmp = prev.next;
					masterListRear = prev;
				}
			}else{
				if(tmp.data.length()-1-pass<0){
					prev.next = tmp.next;
					buckets[i].next = tmp;
					tmp.next = buckTmp;
					buckets[i] = tmp;
					tmp = prev.next;
					masterListRear = prev;
				}else if(Character.digit(tmp.data.charAt(tmp.data.length()-1-pass),radix)==i){
					prev.next = tmp.next;
					buckets[i].next = tmp;
					tmp.next = buckTmp;
					buckets[i] = tmp;
					tmp = prev.next;
					masterListRear = prev;
				}
				
			  }
		
		}
		
	}

	
	public void gather() {
		
		int count;
		Node<String> tmp = null;
		for(count = 0; count < radix; count++){
			if(buckets[count] == null){
				
			}else{
			masterListRear = buckets[count];
				count++;
				break;
				}
			
		}
				for(int i = count; i < radix; i++){
					if(buckets[i]==null){
					}else{
						tmp = buckets[i].next;
						buckets[i].next = masterListRear.next;
						masterListRear.next = tmp;
						masterListRear = buckets[i];
				
					}
			
			
				}
				
		
	} 
	
	
	
}





