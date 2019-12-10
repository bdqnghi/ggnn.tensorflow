static private boolean deleteDirectory(File file) {
    if (file.exists()) {
        File[] files = file.listFiles();
        if (files != null) {
            for (int i = 0, n = files.length; i < n; i++) {
                if (files[i].isDirectory())
                    deleteDirectory(files[i]);
                else
                    files[i].delete();
            }
        }
    }
    return file.delete();
}
