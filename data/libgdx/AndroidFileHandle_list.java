public FileHandle[] list(String suffix) {
    if (type == FileType.Internal) {
        try {
            String[] relativePaths = assets.list(file.getPath());
            FileHandle[] handles = new FileHandle[relativePaths.length];
            int count = 0;
            for (int i = 0, n = handles.length; i < n; i++) {
                String path = relativePaths[i];
                if (!path.endsWith(suffix))
                    continue;
                handles[count] = new AndroidFileHandle(assets, new File(file, path), type);
                count++;
            }
            if (count < relativePaths.length) {
                FileHandle[] newHandles = new FileHandle[count];
                System.arraycopy(handles, 0, newHandles, 0, count);
                handles = newHandles;
            }
            return handles;
        } catch (Exception ex) {
            throw new GdxRuntimeException("Error listing children: " + file + " (" + type + ")", ex);
        }
    }
    return super.list(suffix);
}
