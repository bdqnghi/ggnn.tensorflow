public static void testValueMatchesIndex(int runs, int k) {
    verify = false;
    for (int i = 0; i < runs; i++) {
        allRandom();
        player.shuffle();
        enemy.shuffle();
        originDummy = player.random();
        int idx = enemy.selectRankedIndex(distComp, k);
        Dummy indexDummy = enemy.get(idx);
        Dummy valueDummy = enemy.selectRanked(distComp, k);
        if (!(indexDummy.equals(valueDummy))) {
            throw new GdxRuntimeException("results of selectRankedIndex and selectRanked do not return the same object\n" + "selectRankedIndex -> " + indexDummy + "\n" + "selectRanked      -> " + valueDummy);
        }
    }
}
