private static FileHandle getRelativeFileHandle(FileHandle file, String path) {
    StringTokenizer tokenizer = new StringTokenizer(path, "\\/");
    FileHandle result = file.parent();
    while (tokenizer.hasMoreElements()) {
        String token = tokenizer.nextToken();
        if (token.equals(".."))
            result = result.parent();
        else {
            result = result.child(token);
        }
    }
    return result;
}
