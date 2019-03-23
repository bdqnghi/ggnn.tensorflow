 protected int cmp(int node1, int node2) {
        int c = 0;
        if (comp != null) {
            c = comp.compare(get(node1), get(node2));
        } else {
            c = ((Comparable<T>) get(node1)).compareTo(get(node2));
        }

        return c;
    }

    
    private void heapify(int node, int size) {
        if (node > size) {
            return;
        }

        int left = (node + 1) * 2 - 1;
        int right = (node + 1) * 2;

        int minidx = node;

        if (left < size && cmp(left, node) <= 0) {
            minidx = left;
        }
        if (right < size && cmp(right, node) <= 0 && cmp(right, left) <= 0) {
            minidx = right;
        }

        if (minidx != node) {
            
            T tmp = get(node);
            set(node, get(minidx));
            set(minidx, tmp);

            heapify(minidx, size);
        }
    }

    
    private void heapify(int node) {
        heapify(node, size());
    }
