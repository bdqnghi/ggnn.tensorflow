public boolean isDirectory() {
    if (type == FileType.Internal) {
        try {
            return assets.list(file.getPath()).length > 0;
        } catch (IOException ex) {
            return false;
        }
    }
    return super.isDirectory();
}
