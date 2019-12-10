public static void test(int runs, int k) {
    // k = kth order statistic
    comparisonsMade = 0;
    perf.reset();
    allPerf.reset();
    allRandom();
    enemy.shuffle();
    player.shuffle();
    for (int i = 0; i < runs; i++) {
        getKthNearestEnemy(quiet, k);
    }
}
