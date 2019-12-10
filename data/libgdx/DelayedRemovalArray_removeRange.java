public void removeRange(int start, int end) {
    if (iterating > 0) {
        for (int i = end; i >= start; i--) remove(i);
    } else
        super.removeRange(start, end);
}
