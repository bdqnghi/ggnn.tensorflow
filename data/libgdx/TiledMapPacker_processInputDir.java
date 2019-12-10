/**
 *  You can either run the {@link TiledMapPacker#main(String[])} method or reference this class in your own project and call
 *  this method. If working with libGDX sources, you can also run this file to create a run configuration then export it as a
 *  Runnable Jar. To run from a nightly build:
 *
 *  <code> <br><br>
 *  Linux / OS X <br>
 * 	   java -cp gdx.jar:gdx-natives.jar:gdx-backend-lwjgl.jar:gdx-backend-lwjgl-natives.jar:gdx-tiled-preprocessor.jar:extensions/gdx-tools/gdx-tools.jar
 * 	    com.badlogic.gdx.tiledmappacker.TiledMapPacker inputDir [outputDir]  [--strip-unused] [--combine-tilesets] [-v]
 *  <br><br>
 *
 *  Windows <br>
 * 	   java -cp gdx.jar;gdx-natives.jar;gdx-backend-lwjgl.jar;gdx-backend-lwjgl-natives.jar;gdx-tiled-preprocessor.jar;extensions/gdx-tools/gdx-tools.jar
 * 	    com.badlogic.gdx.tiledmappacker.TiledMapPacker inputDir [outputDir]  [--strip-unused] [--combine-tilesets] [-v]
 *  <br><br> </code>
 *
 *  Keep in mind that this preprocessor will need to load the maps by using the {@link TmxMapLoader} loader and this in turn
 *  will need a valid OpenGL context to work.
 *
 *  Process a directory containing TMX map files representing Tiled maps and produce multiple, or a single, TextureAtlas as well
 *  as new processed TMX map files, correctly referencing the generated {@link TextureAtlas} by using the "atlas" custom map
 *  property.
 */
public void processInputDir(Settings texturePackerSettings) throws IOException {
    FileHandle inputDirHandle = new FileHandle(inputDir.getCanonicalPath());
    File[] mapFilesInCurrentDir = inputDir.listFiles(new TmxFilter());
    tilesetsToPack = new ObjectMap<String, TiledMapTileSet>();
    // Processes the maps inside inputDir
    for (File mapFile : mapFilesInCurrentDir) {
        processSingleMap(mapFile, inputDirHandle, texturePackerSettings);
    }
    processSubdirectories(inputDirHandle, texturePackerSettings);
    boolean combineTilesets = this.settings.combineTilesets;
    if (combineTilesets == true) {
        packTilesets(inputDirHandle, texturePackerSettings);
    }
}
