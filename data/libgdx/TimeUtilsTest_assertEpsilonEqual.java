private void assertEpsilonEqual(long a, long b, String testName) {
    System.out.println("Compare " + a + " to " + b);
    if (Math.abs(a - b) > oneMilliInNanos) {
        failTest(testName + " - NOT EQUAL");
    } else {
        System.out.println("TEST PASSED: " + testName);
    }
}
