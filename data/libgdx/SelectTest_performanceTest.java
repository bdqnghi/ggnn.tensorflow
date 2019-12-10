public static void performanceTest(int runs, int k) {
    verify = false;
    test(runs, k);
    String msg = String.format("[%d runs with %dx%d dummy game units] - ", runs, player.size, enemy.size);
    print(msg + String.format("avg: %.5f, min/max: %.4f/%.4f, total time: %.3f (ms), made %d comparisons", allPerf.time.min, allPerf.time.max, allPerf.time.average * 1000, allPerf.time.total * 1000, comparisonsMade));
}
