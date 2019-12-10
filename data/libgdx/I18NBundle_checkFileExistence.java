// On Android this is much faster than fh.exists(), see https://github.com/libgdx/libgdx/issues/2342
// Also this should fix a weird problem on iOS, see https://github.com/libgdx/libgdx/issues/2345
private static boolean checkFileExistence(FileHandle fh) {
    try {
        fh.read().close();
        return true;
    } catch (Exception e) {
        return false;
    }
}
