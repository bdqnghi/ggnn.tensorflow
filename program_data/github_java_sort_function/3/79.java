import java.util.*;

class TopologicalSort{
 static LinkedList<Integer> arr[];
 static boolean visited[];
 static Stack<Integer> stack;
 TopologicalSort(int v){
  arr = new LinkedList[v];
  visited = new boolean[v];
  stack = new Stack<>();
  for(int i=0;i<v;i++){
   arr[i] = new LinkedList();
   visited[i] = false;
  }
 }
 public void addEdge(int src, int dest){
  arr[src].add(dest);
 }
 public void sort(int i){
  visited[i] = true;
  Iterator<Integer> ite = arr[i].listIterator();
  while(ite.hasNext()){
   int item = ite.next();
   if(!visited[item]){
     sort(item);
   }
  }
  stack.push(i);
 }

}
