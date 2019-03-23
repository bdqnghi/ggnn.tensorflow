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
		for (int i=0; i <maxDigits; i++) {
			scatter(i);
			gather();
		}
		
		return masterListRear;
	}
	
	
	public void createMasterListFromInput(Scanner sc) 
	throws IOException{
		masterListRear=new Node<String>(sc.next(),null);
		if(!sc.hasNext()){
			masterListRear.next=masterListRear;
		}
		Node<String> tmp=null;
		while(sc.hasNext()){
			Node<String> n=new Node<String>(sc.next(), tmp);
			if(tmp==null){
				masterListRear.next=n;
				tmp=masterListRear;
				masterListRear=n;
				masterListRear.next=tmp;
			}else{
				masterListRear.next=n;
				masterListRear=n;
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
	
		for(int i=0;i<buckets.length;i++){
			buckets[i]=null;
		}
		Node<String> tmp=masterListRear.next;
		Node<String> post=masterListRear.next.next;
		do{
			int digit=0;
			if(pass+1>tmp.data.length())
				digit=0;
			else
				digit=Character.digit(tmp.data.charAt(tmp.data.length()-pass-1), radix);
			
			if(buckets[digit]==null){
				buckets[digit]=tmp;
				tmp.next=buckets[digit];
			}else{
				
				tmp.next=buckets[digit].next;
				buckets[digit].next=tmp;
				buckets[digit]=tmp;
			}
			masterListRear.next=post;
			tmp=post;
			post=post.next;
			if(tmp==masterListRear){
				if(pass+1>tmp.data.length())
					digit=0;
				else
					digit=Character.digit(tmp.data.charAt(tmp.data.length()-pass-1), radix);
				if(buckets[digit]==null){
					buckets[digit]=tmp;
					tmp.next=buckets[digit];
				}else{
					tmp.next=buckets[digit].next;
					buckets[digit].next=tmp;
					buckets[digit]=tmp;
				
				}
			}
			
		}while(tmp!=masterListRear);
		




	
	}

	
	public void gather() {
	
	

		masterListRear=null;
		
		boolean first=true;
		Node<String> count=null;
		for(int i=0;i<buckets.length;i++){
			if(masterListRear!=null&&buckets[i]!=null)
				masterListRear.next=buckets[i].next;
			if(buckets[i]!=null){
				if(first){
					count=buckets[i].next;
					first=false;
				}
				masterListRear=buckets[i];
			}
		}
		masterListRear.next=count;
		
		Node<String> ptr2 = masterListRear.next;
	}	
}

