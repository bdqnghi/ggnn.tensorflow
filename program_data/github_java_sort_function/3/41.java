package hw4;

import java.util.ArrayList;

public class TopologicalSort {
	
	Frame instance;
	ArrayList<Pair> pairs;
	ArrayList<Frame> precedenceList;
	ArrayList<Frame> frames;

	public TopologicalSort(Frame instance){
		this.instance = instance;
		pairs = new ArrayList<Pair>();
		precedenceList = new ArrayList<Frame>();
		frames = new ArrayList<Frame>();
		createPairs(instance);

		sort();

		System.out.println("Done");
	}

	private void createPairs(Frame target)
	{
		frames.add(target);
		Frame current = target;


		if(current.getLeftSuperclass() != null && current.getRightSuperclass() != null)
		{
			pairs.add(new Pair(current, current.getLeftSuperclass()));
			pairs.add(new Pair(current.getLeftSuperclass(), current.getRightSuperclass()));
			createPairs(current.getLeftSuperclass());
			createPairs(current.getRightSuperclass());
		}
		else
			if(current.getLeftSuperclass() != null && current.getRightSuperclass() == null)
			{
				pairs.add(new Pair(current, current.getLeftSuperclass()));
				createPairs(current.getLeftSuperclass());
			}
			else
				if(target.getLeftSuperclass() == null && target.getRightSuperclass() == null)
					pairs.add(new Pair(current));
	}

	private void sort()
	{
		while(!pairs.isEmpty())
		{
			ArrayList<String> exposed = getExposedClasses();

			if(exposed.size() == 1)
			{
				precedenceList.add(find(exposed.get(0)));
				removeFromPairs(exposed.get(0));
			}
			else
				if(exposed.size() == 2)
				{
					int i = 1;
					boolean cont = true;
					String current = precedenceList.get(precedenceList.size() - i).getName();
					while( cont)
					{
						if(precedenceList.get(precedenceList.size() - i).isSuperclass(exposed.get(0)) && !precedenceList.get(precedenceList.size() - i).isSuperclass(exposed.get(1)) )
						{
							precedenceList.add(find(exposed.get(0)));
							removeFromPairs(exposed.get(0));
							cont = false;
						}
						else
							if(!precedenceList.get(precedenceList.size() - i).isSuperclass(exposed.get(0)) && precedenceList.get(precedenceList.size() - i).isSuperclass(exposed.get(1)) )
							{
								precedenceList.add(find(exposed.get(1)));
								removeFromPairs(exposed.get(1));
								cont = false;
							}
							else
								i++;
					}
				}
		}


	}

	private Frame find(String name)
	{
		for(Frame F : frames)
			if(F.getName().compareTo(name) == 0)
				return F;
		return null;
	}

	private void removeFromPairs(String name)
	{
		for( int i = 0; i < pairs.size(); i++)
		{
			if(pairs.get(i).getFirst().compareTo(name) == 0)
				pairs.remove(i--);
		}
	}

	private ArrayList<String> getExposedClasses()
	{
		ArrayList<String> exposed = new ArrayList<String>();
		for (Pair P1 : pairs)
		{
			boolean add = true;
			for( Pair P2 : pairs)
			{
				if(P2.getSecond() != null && P1.getFirst().compareTo(P2.getSecond()) == 0)
					add = false;
			}
			if(add && !exposed.contains(P1.getFirst()))
				exposed.add(P1.getFirst());
		}
		return exposed;
	}
}
