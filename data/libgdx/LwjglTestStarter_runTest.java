/**
 * Runs the {@link GdxTest} with the given name.
 *
 * @param testName the name of a test class
 * @return {@code true} if the test was found and run, {@code false} otherwise
 */
public static boolean runTest(String testName) {
    boolean useGL30 = false;
    GdxTest test = GdxTests.newTest(testName);
    if (test == null) {
        return false;
    }
    LwjglApplicationConfiguration config = new LwjglApplicationConfiguration();
    config.width = 640;
    config.height = 480;
    config.title = testName;
    config.forceExit = false;
    if (useGL30) {
        config.useGL30 = true;
        ShaderProgram.prependVertexCode = "#version 140\n#define varying out\n#define attribute in\n";
        ShaderProgram.prependFragmentCode = "#version 140\n#define varying in\n#define texture2D texture\n#define gl_FragColor fragColor\nout vec4 fragColor;\n";
    } else {
        config.useGL30 = false;
        ShaderProgram.prependVertexCode = "";
        ShaderProgram.prependFragmentCode = "";
    }
    new LwjglApplication(test, config);
    return true;
}
