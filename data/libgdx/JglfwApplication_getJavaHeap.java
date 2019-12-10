public long getJavaHeap() {
    return Runtime.getRuntime().totalMemory() - Runtime.getRuntime().freeMemory();
}
