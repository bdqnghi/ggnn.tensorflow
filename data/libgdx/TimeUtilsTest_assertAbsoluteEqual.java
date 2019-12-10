private void assertAbsoluteEqual(long a, long b, String testName) {
    // because of precision loss in conversion, epsilon = 1 ms worth of nanos
    System.out.println("Compare " + a + " to " + b);
    if (a != b) {
        failTest(testName + " - NOT EQUAL");
    } else {
        System.out.println("TEST PASSED: " + testName);
    }
}
