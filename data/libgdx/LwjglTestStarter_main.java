/**
 * Runs a libgdx test.
 *
 * If no arguments are provided on the command line, shows a list of tests to choose from.
 * If an argument is present, the test with that name will immediately be run.
 *
 * @param argv command line arguments
 */
public static void main(String[] argv) throws Exception {
    if (argv.length > 0) {
        if (runTest(argv[0])) {
            return;
        // Otherwise, fall back to showing the list
        }
    }
    UIManager.setLookAndFeel(UIManager.getSystemLookAndFeelClassName());
    new LwjglTestStarter();
}
