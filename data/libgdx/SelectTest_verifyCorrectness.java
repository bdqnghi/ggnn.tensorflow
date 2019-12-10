public static void verifyCorrectness(Dummy d, int k) {
    enemy.sort(distComp);
    int idx = enemy.indexOf(d, true);
    // remember that k = min value = 0 position in the array, therefore k - 1
    if (enemy.get(idx) != enemy.get(k - 1)) {
        System.out.println("origin dummy: " + originDummy);
        System.out.println("TEST FAILURE: " + "idx: " + idx + " does not equal (k - 1): " + (k - 1));
        throw new GdxRuntimeException("test failed");
    }
}
