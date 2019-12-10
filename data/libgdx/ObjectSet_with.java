static public <T> ObjectSet<T> with(T... array) {
    ObjectSet set = new ObjectSet();
    set.addAll(array);
    return set;
}
