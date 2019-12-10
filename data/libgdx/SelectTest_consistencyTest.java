public static void consistencyTest(int runs, int k) {
    verify = false;
    Dummy test = player.get(0);
    Dummy lastFound = null;
    allRandom();
    for (int i = 0; i < runs; i++) {
        Dummy found = test.getKthNearestEnemy(k);
        if (lastFound == null) {
            lastFound = found;
        } else {
            if (!(lastFound.equals(found))) {
                print("CONSISTENCY TEST FAILED");
                print("lastFound: " + lastFound);
                print("justFound: " + found);
                throw new GdxRuntimeException("test failed");
            }
        }
    }
}
