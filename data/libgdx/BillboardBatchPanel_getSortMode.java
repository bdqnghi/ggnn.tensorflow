private Object getSortMode(ParticleSorter sorter) {
    Class type = sorter.getClass();
    for (SortMode wrapper : SortMode.values()) {
        if (wrapper.sorter.getClass() == type)
            return wrapper;
    }
    return null;
}
