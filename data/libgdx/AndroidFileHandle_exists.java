public boolean exists() {
    if (type == FileType.Internal) {
        String fileName = file.getPath();
        try {
            // Check if file exists.
            assets.open(fileName).close();
            return true;
        } catch (Exception ex) {
            // This is SUPER slow! but we need it for directories.
            try {
                return assets.list(fileName).length > 0;
            } catch (Exception ignored) {
            }
            return false;
        }
    }
    return super.exists();
}
