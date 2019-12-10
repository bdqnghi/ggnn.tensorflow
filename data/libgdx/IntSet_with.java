static public IntSet with(int... array) {
    IntSet set = new IntSet();
    set.addAll(array);
    return set;
}
