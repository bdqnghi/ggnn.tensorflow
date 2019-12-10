/**
 * Returns true if the file exists. On Android, a {@link FileType#Classpath} or {@link FileType#Internal} handle to a directory
 * will always return false.
 */
public boolean exists() {
    switch(type) {
        case Internal:
            if (file.exists())
                return true;
        // Fall through.
        case Classpath:
            return FileWrapper.class.getResource("/" + file.getPath().replace('\\', '/')) != null;
    }
    return file().exists();
}
