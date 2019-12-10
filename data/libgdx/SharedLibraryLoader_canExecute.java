private boolean canExecute(File file) {
    try {
        Method canExecute = File.class.getMethod("canExecute");
        if ((Boolean) canExecute.invoke(file))
            return true;
        Method setExecutable = File.class.getMethod("setExecutable", boolean.class, boolean.class);
        setExecutable.invoke(file, true, false);
        return (Boolean) canExecute.invoke(file);
    } catch (Exception ignored) {
    }
    return false;
}
