public PerformanceCounter add(final String name) {
    PerformanceCounter result = new PerformanceCounter(name);
    counters.add(result);
    return result;
}
