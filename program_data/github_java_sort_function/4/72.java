
public class heapsort {
	int a[];
	public heapsort (int[] a){
		this.a = a;
		heapsort();
	}

	private void heapsort(){
		int start,end;

		for(start = (a.length-2) /2; start >= 0; start--)
			siftdown(start, a.length-1);

		for(end = a.length -1; end >0; end--){
			swap(0,end);
			siftdown(0,end);
		}
	}

	private void siftdown(int s, int e){
		int root = s;

		while(root*2+1 < e){
			int child = root*2+1;

			if(child+1 < e && a[child] < a[child+1])
				child++;

			if(a[root] < a[child]){
				swap(root,child);
				root = child;
			}else
				return;
		}
	}
	
	public void swap(int i, int j){
		int t = a[i];
		a[i] = a[j];
		a[j] = t;
	}
}
