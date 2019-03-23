
    public static <K> void quickSort(Queue<K> S, Comparator<K> comp) {
        int n = S.size();
        if (n < 2)
            return; 
        
        K pivot = S.first(); 
        Queue<K> L = new LinkedQueue<>();
        Queue<K> E = new LinkedQueue<>();
        Queue<K> G = new LinkedQueue<>();
        while (!S.isEmpty()) { 
            K element = S.dequeue();
            int c = comp.compare(element, pivot);
            if (c < 0) 
                L.enqueue(element);
            else if (c == 0) 
                E.enqueue(element);
            else 
                G.enqueue(element);
        }
        
        quickSort(L, comp); 
        quickSort(G, comp); 
        
        while (!L.isEmpty())
            S.enqueue(L.dequeue());
        while (!E.isEmpty())
            S.enqueue(E.dequeue());
        while (!G.isEmpty())
            S.enqueue(G.dequeue());
    }
