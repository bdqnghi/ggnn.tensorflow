/**
 * Runs the {@link GdxTest} with the given name.
 * @param testName the name of a test class
 * @return {@code true} if the test was found and run, {@code false} otherwise
 */
public static JglfwApplication runTest(String testName) {
    final GdxTest test = GdxTests.newTest(testName);
    if (test == null)
        throw new GdxRuntimeException("Test not found: " + testName);
    final JglfwApplicationConfiguration config = new JglfwApplicationConfiguration();
    config.width = 640;
    config.height = 480;
    config.title = testName;
    config.forceExit = false;
    return new JglfwApplication(test, config);
}
