private static void processExtraArgs(String[] args, TiledMapPackerSettings packerSettings) {
    String stripUnused = "--strip-unused";
    String combineTilesets = "--combine-tilesets";
    String verbose = "-v";
    int length = args.length - 2;
    String[] argsNotDir = new String[length];
    System.arraycopy(args, 2, argsNotDir, 0, length);
    for (String string : argsNotDir) {
        if (stripUnused.equals(string)) {
            packerSettings.stripUnusedTiles = true;
        } else if (combineTilesets.equals(string)) {
            packerSettings.combineTilesets = true;
        } else if (verbose.equals(string)) {
            packerSettings.verbose = true;
        } else {
            System.out.println("\nOption \"" + string + "\" not recognized.\n");
            printUsage();
            System.exit(0);
        }
    }
}
