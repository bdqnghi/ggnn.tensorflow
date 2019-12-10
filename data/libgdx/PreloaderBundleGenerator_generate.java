@Override
public String generate(TreeLogger logger, GeneratorContext context, String typeName) throws UnableToCompleteException {
    System.out.println(new File(".").getAbsolutePath());
    String assetPath = getAssetPath(context);
    String assetOutputPath = getAssetOutputPath(context);
    if (assetOutputPath == null) {
        assetOutputPath = "war/";
    }
    AssetFilter assetFilter = getAssetFilter(context);
    FileWrapper source = new FileWrapper(assetPath);
    if (!source.exists()) {
        source = new FileWrapper("../" + assetPath);
        if (!source.exists())
            throw new RuntimeException("assets path '" + assetPath + "' does not exist. Check your gdx.assetpath property in your GWT project's module gwt.xml file");
    }
    if (!source.isDirectory())
        throw new RuntimeException("assets path '" + assetPath + "' is not a directory. Check your gdx.assetpath property in your GWT project's module gwt.xml file");
    System.out.println("Copying resources from " + assetPath + " to " + assetOutputPath);
    System.out.println(source.file.getAbsolutePath());
    // this should always be the war/ directory of the GWT project.
    FileWrapper target = new FileWrapper("assets/");
    System.out.println(target.file.getAbsolutePath());
    if (!target.file.getAbsolutePath().replace("\\", "/").endsWith(assetOutputPath + "assets")) {
        target = new FileWrapper(assetOutputPath + "assets/");
    }
    if (target.exists()) {
        if (!target.deleteDirectory())
            throw new RuntimeException("Couldn't clean target path '" + target + "'");
    }
    ArrayList<Asset> assets = new ArrayList<Asset>();
    copyDirectory(source, target, assetFilter, assets);
    // Now collect classpath files and copy to assets
    List<String> classpathFiles = getClasspathFiles(context);
    for (String classpathFile : classpathFiles) {
        if (assetFilter.accept(classpathFile, false)) {
            try {
                InputStream is = context.getClass().getClassLoader().getResourceAsStream(classpathFile);
                FileWrapper dest = target.child(classpathFile);
                dest.write(is, false);
                assets.add(new Asset(dest, assetFilter.getType(dest.path())));
                is.close();
            } catch (IOException e) {
                e.printStackTrace();
            }
        }
    }
    HashMap<String, ArrayList<Asset>> bundles = new HashMap<String, ArrayList<Asset>>();
    for (Asset asset : assets) {
        String bundleName = assetFilter.getBundleName(asset.file.path());
        if (bundleName == null) {
            bundleName = "assets";
        }
        ArrayList<Asset> bundleAssets = bundles.get(bundleName);
        if (bundleAssets == null) {
            bundleAssets = new ArrayList<Asset>();
            bundles.put(bundleName, bundleAssets);
        }
        bundleAssets.add(asset);
    }
    for (Entry<String, ArrayList<Asset>> bundle : bundles.entrySet()) {
        StringBuffer buffer = new StringBuffer();
        for (Asset asset : bundle.getValue()) {
            String path = asset.file.path().replace('\\', '/').replace(assetOutputPath, "").replaceFirst("assets/", "");
            if (path.startsWith("/"))
                path = path.substring(1);
            buffer.append(asset.type.code);
            buffer.append(":");
            buffer.append(path);
            buffer.append(":");
            buffer.append(asset.file.isDirectory() ? 0 : asset.file.length());
            buffer.append(":");
            String mimetype = URLConnection.guessContentTypeFromName(asset.file.name());
            buffer.append(mimetype == null ? "application/unknown" : mimetype);
            buffer.append("\n");
        }
        target.child(bundle.getKey() + ".txt").writeString(buffer.toString(), false);
    }
    return createDummyClass(logger, context);
}
