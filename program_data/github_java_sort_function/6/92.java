package apps;

import java.io.IOException;
import java.util.Arrays;
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
		String FirstInput = sc.nextLine();
		Node<String> list = new Node(FirstInput,null);
		masterListRear = list;
		while(sc.hasNext()){
			 String data = sc.nextLine();
			 list.next = new Node(data,null);
			 list = list.next;
		}
		list.next=masterListRear;
		masterListRear=list;
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
		
		Arrays.fill(buckets, null);
		Node<String> ptr = masterListRear.next;
		Node<String> check = masterListRear.next;
		Node<String> nextNum;
		do{
			nextNum=ptr.next;
			int value;
			if (ptr.data.length()>=pass+1){
				char digit = ptr.data.charAt(ptr.data.length()-(pass+1));
				value = Character.digit(digit,radix);
			}else{
				value=0;
			}
			
			if (buckets[value]==null){
				buckets[value]=ptr;
				ptr.next=ptr;
			}else{
				Node<String> initial = buckets[value];
				Node<String> last = buckets[value];
				while(last.next!=initial){
					last=last.next;
				}
				last.next=ptr;
				ptr.next=initial;
			}
			
			
			ptr=nextNum;
		}while(ptr!=check);
	}

	
	public void gather() {
		
		int num=0;
		
		while(buckets[num]==null){
			num++;
		}
		
		Node<String> first = buckets[num];
		Node<String> insertAfter=first;
		
		while(insertAfter.next!=first){
			insertAfter=insertAfter.next;
		}
		
		for(int i=num+1;i<buckets.length;i++){
			Node<String> position = buckets[i];
			
			if (position!=null){
				insertAfter.next=position;
				insertAfter=insertAfter.next;
				Node<String> initial = position;
				while(position.next!=initial){
					insertAfter=insertAfter.next;
					position=position.next;
				}			
		
			}
		}
		
		masterListRear=insertAfter;
		masterListRear.next=first;
	}	
	
}

