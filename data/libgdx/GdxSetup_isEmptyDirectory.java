public static boolean isEmptyDirectory(String destination) {
    if (new File(destination).exists()) {
        return new File(destination).list().length == 0;
    } else {
        return true;
    }
}
