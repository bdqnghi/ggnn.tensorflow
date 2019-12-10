@Override
public void create() {
    int n = 100;
    player = createDummies(n);
    enemy = createDummies(n);
    int runs = 100;
    // run correctness first to warm up the JIT and other black magic
    quiet = true;
    allRandom();
    print("VERIFY CORRECTNESS FIND LOWEST RANKED");
    correctnessTest(runs, 1);
    print("VERIFY CORRECTNESS FIND MIDDLE RANKED");
    correctnessTest(runs, enemy.size / 2);
    print("VERIFY CORRECTNESS FIND HIGHEST RANKED");
    correctnessTest(runs, enemy.size);
    runs = 1000;
    quiet = true;
    print("BENCHMARK FIND LOWEST RANKED");
    performanceTest(runs, 1);
    print("BENCHMARK FIND MIDDLE RANKED");
    performanceTest(runs, enemy.size / 2);
    print("BENCHMARK FIND HIGHEST RANKED");
    performanceTest(runs, enemy.size);
    print("TEST CONSISTENCY FOR LOWEST RANKED");
    consistencyTest(runs, 1);
    print("TEST CONSISTENCY FOR MIDDLE RANKED");
    consistencyTest(runs, enemy.size / 2);
    print("TEST CONSISTENCY FOR HIGHEST RANKED");
    consistencyTest(runs, enemy.size);
    // test that selectRanked and selectRankedIndex return the same
    print("TEST selectRanked AND selectRankedIndex RETURN MATCHING RESULTS - LOWEST RANKED");
    testValueMatchesIndex(runs, 1);
    print("TEST selectRanked AND selectRankedIndex RETURN MATCHING RESULTS - MIDDLE RANKED");
    testValueMatchesIndex(runs, enemy.size / 2);
    print("TEST selectRanked AND selectRankedIndex RETURN MATCHING RESULTS - HIGHEST RANKED");
    testValueMatchesIndex(runs, enemy.size);
    print("ALL TESTS PASSED");
}
