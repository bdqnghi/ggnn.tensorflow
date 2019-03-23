import java.util.*;


class TopologicalSort
{

	static Stack<Integer> topoSort(ArrayList<PriorityQueue<Integer>> adjl)
	{
		int i, v = adjl.size(),x,y,visitedCount = 0,time = 0;
		boolean isVisited[] = new boolean[v];
		Stack<Integer> topo = new Stack<Integer>();
		int fin_time[] = new int[v];
		Stack<Integer> dfs = new Stack<Integer>();
		PriorityQueue<Integer> pq;
		dfs.push(v-1);
		while(!dfs.isEmpty())
		{
			x = dfs.pop();
			if(!isVisited[x])
			{
				dfs.push(x);
				++time;
				pq = adjl.get(x);
				while(!pq.isEmpty())
				{
					y = pq.poll();
					if(!isVisited[y])
						dfs.push(y);
				}
				isVisited[x] = true;
				visitedCount++;
			}
			else
			{
				if(fin_time[x] == 0)
				{
					fin_time[x] = ++time;
					topo.push(x);
				}	
			}
			if(dfs.isEmpty() && visitedCount != (v-1))
			{
				for(i=1;i<v;i++)
					if(!isVisited[i])
						dfs.push(i);
			}
		}
		
		return topo;
	}
	
	static void pr(String s)
	{
		System.out.println(s);
	}
}


