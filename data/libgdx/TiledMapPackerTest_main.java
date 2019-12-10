public static void main(String[] args) throws Exception {
    String path = "../../tests/gdx-tests-android/assets/data/maps/";
    String input = path + "tiled-atlas-src";
    String output = path + "tiled-atlas-processed/deleteMe";
    String verboseOpt = "-v";
    String unused = "--strip-unused";
    String combine = "--combine-tilesets";
    String badOpt = "bad";
    File outputDir = new File(output);
    if (outputDir.exists()) {
        System.out.println("Please run TiledMapPackerTestRender or delete \"deleteMe\" folder located in");
        System.out.println("gdx-tests-android: assets/data/maps/tiled-atlas-processed/deleteMe");
        return;
    }
    TestType testType = TestType.DefaultUsage;
    String[] noArgs = {};
    String[] defaultUsage = { input, output };
    String[] verbose = { input, output, verboseOpt };
    String[] stripUnused = { input, output, unused };
    String[] combineTilesets = { input, output, combine };
    String[] unusedAndCombine = { input, output, unused, combine };
    String[] badOption = { input, output, unused, verboseOpt, combine, badOpt };
    switch(testType) {
        case NoArgs:
            TiledMapPacker.main(noArgs);
            break;
        case DefaultUsage:
            TiledMapPacker.main(defaultUsage);
            break;
        case Verbose:
            TiledMapPacker.main(verbose);
            break;
        case StripUnused:
            TiledMapPacker.main(stripUnused);
            break;
        case CombineTilesets:
            TiledMapPacker.main(combineTilesets);
            break;
        case UnusedAndCombine:
            TiledMapPacker.main(unusedAndCombine);
            break;
        case BadOption:
            TiledMapPacker.main(badOption);
            break;
        default:
            break;
    }
}
