/**
 * getInputStream returns an AssetFileDescriptor.AutoCloseInputStream
 * associated with the asset that is contained in the Zip file, or a
 * standard ZipInputStream if necessary to uncompress the file
 *
 * @param assetPath
 * @return an input stream for the named asset path, or null if not found
 * @throws IOException
 */
public InputStream getInputStream(String assetPath) throws IOException {
    ZipEntryRO entry = mHashMap.get(assetPath);
    if (null != entry) {
        if (entry.isUncompressed()) {
            return entry.getAssetFileDescriptor().createInputStream();
        } else {
            ZipFile zf = mZipFiles.get(entry.getZipFile());
            /**
             * read compressed files *
             */
            if (null == zf) {
                zf = new ZipFile(entry.getZipFile(), ZipFile.OPEN_READ);
                mZipFiles.put(entry.getZipFile(), zf);
            }
            ZipEntry zi = zf.getEntry(assetPath);
            if (null != zi)
                return zf.getInputStream(zi);
        }
    }
    return null;
}
