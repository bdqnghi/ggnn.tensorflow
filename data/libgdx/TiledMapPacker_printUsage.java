private static void printUsage() {
    System.out.println("Usage: INPUTDIR [OUTPUTDIR] [--strip-unused] [--combine-tilesets] [-v]");
    System.out.println("Processes a directory of Tiled .tmx maps. Unable to process maps with XML");
    System.out.println("tile layer format.");
    System.out.println("  --strip-unused             omits all tiles that are not used. Speeds up");
    System.out.println("                             the processing. Smaller tilesets.");
    System.out.println("  --combine-tilesets         instead of creating a tileset for each map,");
    System.out.println("                             this combines the tilesets into some kind");
    System.out.println("                             of monster tileset. Has problems with tileset");
    System.out.println("                             location. Has problems with nested folders.");
    System.out.println("                             Not recommended.");
    System.out.println("  -v                         outputs which tiles are stripped and included");
    System.out.println();
}
