/**
 * Main function to run the generator as a standalone program.
 * Run without arguments for usage instructions (or see {@link #usage()}).
 *
 * @param args command line arguments
 */
public static void main(String[] args) {
    try {
        run(args);
    } catch (CommandLineArgumentException e) {
        System.err.println("Error: " + e.getMessage() + "\n");
        usage();
        System.exit(1);
    }
}
