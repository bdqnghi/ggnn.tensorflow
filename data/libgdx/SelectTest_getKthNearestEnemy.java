public Dummy getKthNearestEnemy(int k) {
    perf.start();
    originDummy = this;
    Dummy found = enemy.selectRanked(distComp, k);
    // print(this + " found enemy: " + found);
    perf.stop();
    perf.tick();
    if (verify) {
        verifyCorrectness(found, k);
    }
    return found;
}
