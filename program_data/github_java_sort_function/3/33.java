

package comodo.cg.util.xtend;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Iterator;
import java.util.LinkedList;
import java.util.List;
import java.util.Map;
import java.util.Queue;
import java.util.Set;
import java.util.Vector;

import org.eclipse.uml2.uml.Classifier;
import org.eclipse.uml2.uml.Property;


public class TopologicalSort {

	
	public static final List<Classifier> getETopicSorted(List<Classifier> elementList)
	{
		Vector<ENodeElement> toSort = new Vector<ENodeElement>();
		List<Classifier>  eSortedList = new ArrayList<Classifier> (elementList);
		eSortedList.removeAll(eSortedList);
		
		for(Classifier eElement : elementList)
		{
			String nodeName = eElement.getName();
			Vector<String> edge  = new Vector<String>();
			
			for(Property eProperty : eElement.getAllAttributes() )
			{
				String dataTypeName = eProperty.getType().getName();
				
				if(isCustomType(elementList, dataTypeName))
				{
					edge.add(dataTypeName);
				}
			}
			
			ENodeElement node = new ENodeElement(nodeName, stringVectorToArray(edge));
			toSort.add(node);
		}
		
		try 
		{
			String[] sorted =  TopologicalSort.topologicalSort(eElementVectorToArray(toSort));
			for(int i =0; i< sorted.length; i++)
			{
				eSortedList.add(i, getElement(elementList, sorted[i]));
			}
			return eSortedList;
		} 
		catch (Exception e) 
		{
			
			return null;
		}
	}
	
	
	public static final Classifier getElement(List<Classifier> elementList, String elementName)
	{
		for(Classifier eElement : elementList)
			if(eElement.getName().equals(elementName))
				return eElement;
		
		return null;
	}
	
	
	public static final boolean hasCircularETopicDependencies(List<Classifier> elementList)
	{
		Vector<ENodeElement> toSort = new Vector<ENodeElement>();
		
		for(Classifier eElement : elementList)
		{
			String nodeName = eElement.getName();
			Vector<String> edge  = new Vector<String>();
			
			for(Property eProperty : eElement.getAllAttributes() )
			{
				String dataTypeName = eProperty.getType().getName();
				
				if(isCustomType(elementList, dataTypeName))
				{
					edge.add(dataTypeName);
				}
			}
			
			ENodeElement node = new ENodeElement(nodeName, stringVectorToArray(edge));
			toSort.add(node);
		}
		
		try {
			String[] sorted =  TopologicalSort.topologicalSort(eElementVectorToArray(toSort));
			
			for(String eElementName : sorted)
			{
				System.out.println(eElementName);
			}
			return true;
		} 
		catch (Exception e) 
		{
			
			return true;
		}
	}
	
	
	public static final String[] stringVectorToArray(Vector<String> vectorString)
	{
		String[] arrayString = new String[vectorString.size()];
		
		for(int i=0; i < vectorString.size(); i++)
				arrayString[i] = vectorString.get(i); 
		
		return arrayString;
	}
	
	
	public static final ENodeElement[] eElementVectorToArray(Vector<ENodeElement> vectoreElement)
	{
		ENodeElement[] elementString = new ENodeElement[vectoreElement.size()];
		
		for(int i=0; i < vectoreElement.size(); i++)
				elementString[i] = vectoreElement.get(i); 
		
		return elementString;
	}
	
	
	public static final boolean isCustomType(List<Classifier> elementList, String typeName)
	{
		for(Classifier eElement : elementList)
			if(eElement.getName().equals(typeName)) return true;
		return false;
	}
	
	
	@SuppressWarnings({ "unchecked", "rawtypes" })
	public static final String[] topologicalSort(ENodeElement[] eNode) throws Exception {
		
		int n = eNode.length;
		int index = 0;
		Map graph = new HashMap();
		Queue q = new LinkedList();
		
		String[] sorted = new String[n];
		
		
		for (int i = 0; i < eNode.length; i++) 
		{
			
			graph.put(eNode[i].job, new HashSet());
			String[] requiredJobs = eNode[i].others;
			for (int j = 0; j < requiredJobs.length; j++) 
			{
				
				((Set) graph.get(eNode[i].job)).add(requiredJobs[j]);
			}
			
			if (((Set) graph.get(eNode[i].job)).size() == 0)
				q.add(eNode[i].job);
		}

		
		
		while (q.size() > 0) 
		{
			String s = (String) q.remove();
			sorted[index++] = s;
			Iterator iter = graph.keySet().iterator();
			
			while (iter.hasNext()) 
			{
				
				
				Object key = iter.next();
				if (((Set) graph.get(key)).size() != 0) {
					((Set) graph.get(key)).remove(s);
					
					if (((Set) graph.get(key)).size() == 0) {
						q.add(key);
					}
				}
			}
		}

		if (index < n)
			throw new Exception();

		return sorted;
	}
}
