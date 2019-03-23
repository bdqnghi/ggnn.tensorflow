package apps;

import java.io.IOException;
import java.util.Scanner;

import structures.Node;


public class Radixsort
{

	
	Node<String> masterListRear;

	
	Node<String>[] buckets;

	
	int radix = 10;

	
	public Radixsort()
	{
		masterListRear = null;
		buckets = null;
	}

	
	@SuppressWarnings("unchecked")
	public Node<String> sort(Scanner sc) throws IOException
	{
		
		if (!sc.hasNext())
		{ 
			return null;
		}

		
		radix = sc.nextInt();
		buckets = (Node<String>[]) new Node[radix];

		
		createMasterListFromInput(sc);

		
		int maxDigits = getMaxDigits();

		for (int i = 0; i < maxDigits; i++)
		{
			scatter(i);
			gather();
		}
		return masterListRear;
	}

	
	public void createMasterListFromInput(Scanner sc) throws IOException
	{
		String readLine = null;
		Node<String> tmp = null;
		while (sc.hasNext())
		{
			readLine = sc.next();
			if (!readLine.isEmpty())
			{
				if (null == masterListRear)
				{
					masterListRear = new Node<String>(readLine, masterListRear);
					tmp = masterListRear;
				} else
				{
					tmp.setNext(new Node<String>(readLine, masterListRear));
					tmp = tmp.getNext();
				}
			}
		}
		setListAsRequired();
	}

	
	public int getMaxDigits()
	{
		int maxDigits = masterListRear.getData().length();
		Node<String> ptr = masterListRear.getNext();
		while (ptr != masterListRear)
		{
			int length = ptr.getData().length();
			if (length > maxDigits)
			{
				maxDigits = length;
			}
			ptr = ptr.getNext();
		}
		return maxDigits;
	}

	
	public void scatter(int pass)
	{
		int position = -1, count = 0;
		char[] tmpData = null;
		String tmpBucketData = null;
		Node<String> tmpNode = null;

		while (null != masterListRear)
		{
			
			if(0 == count)
			{
				masterListRear = masterListRear.getNext();
				++count;
			}
			
			tmpData = masterListRear.getData().toCharArray();
			if(0 <= tmpData.length - 1 - pass)
			{
				position = Character.digit(tmpData[tmpData.length - 1 - pass], radix);
			}
			else
			{
				position = 0;
			}

			if (-1 == position)
			{
				return;
			}

			if (null == buckets[position])
			{
				buckets[position] = masterListRear;
				setListRearToNextOne();
				buckets[position].setNext(buckets[position]);

			} else
			{
				tmpBucketData = buckets[position].getData();
				tmpNode = buckets[position];
				
				
				while(!tmpBucketData.equals(tmpNode.getNext().getData()))
				{
					tmpNode = tmpNode.getNext();
				}
				
				tmpNode.setNext(masterListRear);
				setListRearToNextOne();
				tmpNode.getNext().setNext(buckets[position]);
			}
		}
	}

	
	private void setListRearToNextOne()
	{
		
		if (null == masterListRear)
		{
			return;
		}

		String tmpData = masterListRear.getData();

		
		if (tmpData.equals(masterListRear.getNext().getData()))
		{
			masterListRear = null;
		}
		
		else
		{
			while (!tmpData.equals(masterListRear.getNext().getData()))
			{
				masterListRear = masterListRear.getNext();
			}
			masterListRear.setNext(masterListRear.getNext().getNext());

			masterListRear = masterListRear.getNext();
		}
	}

	
	public void gather()
	{
		String tmpData = null;
		Node<String> tmpNode = null;
		
		for (int i = 0; i < buckets.length; ++i)
		{
			if (null == buckets[i])
			{
				continue;
			} else if (null == masterListRear)
			{
				masterListRear = buckets[i];
			} else
			{
				tmpData = masterListRear.getData();
				tmpNode = masterListRear;
				
				while(!tmpData.equals(tmpNode.getNext().getData()))
				{
					tmpNode = tmpNode.getNext();
				}
				
				tmpNode.setNext(buckets[i]);
				
				tmpData = buckets[i].getData();
				tmpNode = tmpNode.getNext();
				
				while(!tmpData.equals(tmpNode.getNext().getData()))
				{
					tmpNode = tmpNode.getNext();
				}
				tmpNode.setNext(masterListRear);
				tmpNode = null;
				tmpData = null;
			}

			buckets[i] = null;
		}
		
		
		setListAsRequired();
	}

	
	private void setListAsRequired()
	{
		String tmp = masterListRear.getData();
		
		while(!tmp.equals(masterListRear.getNext().getData()))
		{
			masterListRear = masterListRear.getNext();
		}
	}

}
