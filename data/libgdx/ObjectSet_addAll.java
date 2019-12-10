public void addAll(ObjectSet<T> set) {
    ensureCapacity(set.size);
    for (T key : set) add(key);
}
