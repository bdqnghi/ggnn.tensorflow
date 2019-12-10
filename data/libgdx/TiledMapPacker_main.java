/**
 * Processes a directory of Tile Maps, compressing each tile set contained in any map once.
 *
 * @param args args[0]: the input directory containing the tmx files (and tile sets, relative to the path listed in the tmx
 *           file). args[1]: The output directory for the tmx files, should be empty before running. args[2-4] options
 */
public static void main(String[] args) {
    final Settings texturePackerSettings = new Settings();
    texturePackerSettings.paddingX = 2;
    texturePackerSettings.paddingY = 2;
    texturePackerSettings.edgePadding = true;
    texturePackerSettings.duplicatePadding = true;
    texturePackerSettings.bleed = true;
    texturePackerSettings.alias = true;
    texturePackerSettings.useIndexes = true;
    final TiledMapPackerSettings packerSettings = new TiledMapPackerSettings();
    if (args.length == 0) {
        printUsage();
        System.exit(0);
    } else if (args.length == 1) {
        inputDir = new File(args[0]);
        outputDir = new File(inputDir, "../output/");
    } else if (args.length == 2) {
        inputDir = new File(args[0]);
        outputDir = new File(args[1]);
    } else {
        inputDir = new File(args[0]);
        outputDir = new File(args[1]);
        processExtraArgs(args, packerSettings);
    }
    TiledMapPacker packer = new TiledMapPacker(packerSettings);
    LwjglApplicationConfiguration config = new LwjglApplicationConfiguration();
    config.forceExit = false;
    config.width = 100;
    config.height = 50;
    config.title = "TiledMapPacker";
    new LwjglApplication(new ApplicationListener() {

        @Override
        public void resume() {
        }

        @Override
        public void resize(int width, int height) {
        }

        @Override
        public void render() {
        }

        @Override
        public void pause() {
        }

        @Override
        public void dispose() {
        }

        @Override
        public void create() {
            TiledMapPacker packer = new TiledMapPacker(packerSettings);
            if (!inputDir.exists()) {
                System.out.println(inputDir.getAbsolutePath());
                throw new RuntimeException("Input directory does not exist: " + inputDir);
            }
            try {
                packer.processInputDir(texturePackerSettings);
            } catch (IOException e) {
                throw new RuntimeException("Error processing map: " + e.getMessage());
            }
            System.out.println("Finished processing.");
            Gdx.app.exit();
        }
    }, config);
}
