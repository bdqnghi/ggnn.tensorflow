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
	buckets = (Node<String>[]) new Node[radix];

	
	createMasterListFromInput(sc);

	
	int maxDigits = getMaxDigits();

	for (int i=0; i < maxDigits; i++) {
		scatter(i);
		gather();

	}

	return masterListRear;
}


public void createMasterListFromInput(Scanner sc) throws IOException
{

	Node<String> ptr = null;
	Node<String> prev = null;
	Node<String> holder = null;
	String RADIX = sc.next();

	for(int i = 0; i < RADIX.length(); i++)
	{
		if(Character.isLetter(RADIX.charAt(i)) )
		{        
			while(sc.hasNext())
			{
				if(masterListRear == null)
				{
					ptr = new Node<String>(RADIX,null);

					masterListRear = ptr;

					ptr.next = ptr;
				}
				else if(masterListRear != null)
				{
				ptr = new Node<String>(sc.next(),null);

				ptr.next = masterListRear.next;

				masterListRear.next = ptr;

				masterListRear = ptr;
				}
			}
		}
		else if(Character.isDigit(RADIX.charAt(i)))
		{
			while(sc.hasNext())
			{         
				if(masterListRear == null)
				{
					ptr = new Node<String>(RADIX,null);

					masterListRear = ptr;

					masterListRear.next = masterListRear;
				}
				else if(masterListRear != null)
				{
					ptr = new Node<String>(sc.next(),null);

					ptr.next = masterListRear.next;

					masterListRear.next = ptr;

					masterListRear = ptr;
				}

			}	
		}
	}
	
}


public int getMaxDigits() {
	if (masterListRear == null){
		System.out.println("Here");
	} 
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


public void scatter(int pass) 
{ 
	Node<String> head = masterListRear.next;
	Node<String> ptr = masterListRear.next;

	int x;

	do {
		Node<String> temp = null;
		if (pass >= head.data.length() )
		{
			x = 0;	
		}
		else
		{
			x = Character.digit(head.data.charAt(head.data.length()-pass - 1), radix);
		}
		if (buckets[x] == null) 
		{
			temp = head;

			head = head.next;

			buckets[x] = temp;

			temp.next = temp;
		} 
		else
		{
			temp = head;

			Node<String> holder = buckets[x].next; 
							       
			head = head.next;

			buckets[x].next = temp;

			temp.next = holder;

			buckets[x] = temp;

		}
	}while(head != ptr);
}

public void gather() 
{
	boolean val = false;
	masterListRear = null;
	Node<String> start = null;

	for(int i = 0; i < buckets.length ; i++)
	{

	if(buckets[i] == null) 
	{
		continue;
	}
	else if(buckets[i] != null) 
	{
		val = true;
	}
	do{
		Node<String> holder = buckets[i];
		Node<String> check = buckets[i];
		
		if(masterListRear == null)
		{
			start = holder;

			holder = holder.next;

			start.next = holder.next;

			masterListRear = holder;

			holder.next = holder;

		}
		else if(masterListRear != null)
		{

		holder = check.next; 

		check.next = holder.next;

		holder.next = masterListRear.next;

		masterListRear.next = holder;

		masterListRear = holder;
		}

		if(check == holder)
		{
			val = false;
		}

		else if(check != holder)
		{
			continue;
		}
	} while(val);
    }
clear();
}

private void clear()
{
	for(int i = 0; i < buckets.length; i++)
	{
		if (buckets[i] == null)
		{
			continue;
		}
		if(buckets[i] != null)
		{
		buckets[i] = null;
		}
	}
     }
}

