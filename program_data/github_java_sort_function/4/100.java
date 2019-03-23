

public static int getmin(ArrayList<Integer> a){
	int retVal = a.get(0);
	a.set(0, a.get(a.size()-1));
	a.remove(a.size()-1);
	if(!a.isEmpty()) siftd(a,0);
	
	return retVal;
}

public static boolean verify(ArrayList<Integer> a){
	
	for(int i = 0; i < a.size()-1; i++){
		if(a.get(i) > a.get(i+1)) return false;
	}
	return true;
	
}


public static void heapify(ArrayList<Integer> a){
	for(int i = a.size()/2; i >=0 ; i--){
		siftd(a,i);
	}
	
}

public static void siftd(ArrayList<Integer> a, int i){
	int left = i*2;
	int right = 2*i +1;
	int smallest = i;
	
	if(left < a.size() && a.get(left) < a.get(i) ){
		smallest = left;
	}
	if(right < a.size() && a.get(right) < a.get(smallest) ){
		smallest = right;
	}
	if(smallest != i){
		int temp = a.get(i);
		a.set(i,a.get(smallest));
		a.set(smallest, temp);
		siftd(a,smallest);
	}
}
	

