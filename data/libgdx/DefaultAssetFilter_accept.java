@Override
public boolean accept(String file, boolean isDirectory) {
    if (isDirectory && file.endsWith(".svn"))
        return false;
    return true;
}
