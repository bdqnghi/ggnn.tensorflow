/**
 * If the PSH file contains a line starting with {@link PolygonRegionParameters#texturePrefix params.texturePrefix}, an
 * {@link AssetDescriptor} for the file referenced on that line will be added to the returned Array. Otherwise a sibling of the
 * given file with the same name and the first found extension in {@link PolygonRegionParameters#textureExtensions
 * params.textureExtensions} will be used. If no suitable file is found, the returned Array will be empty.
 */
@Override
public Array<AssetDescriptor> getDependencies(String fileName, FileHandle file, PolygonRegionParameters params) {
    if (params == null)
        params = defaultParameters;
    String image = null;
    try {
        BufferedReader reader = file.reader(params.readerBuffer);
        for (String line = reader.readLine(); line != null; line = reader.readLine()) if (line.startsWith(params.texturePrefix)) {
            image = line.substring(params.texturePrefix.length());
            break;
        }
        reader.close();
    } catch (IOException e) {
        throw new GdxRuntimeException("Error reading " + fileName, e);
    }
    if (image == null && params.textureExtensions != null)
        for (String extension : params.textureExtensions) {
            FileHandle sibling = file.sibling(file.nameWithoutExtension().concat("." + extension));
            if (sibling.exists())
                image = sibling.name();
        }
    if (image != null) {
        Array<AssetDescriptor> deps = new Array<AssetDescriptor>(1);
        deps.add(new AssetDescriptor<Texture>(file.sibling(image), Texture.class));
        return deps;
    }
    return null;
}
