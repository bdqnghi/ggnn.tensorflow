public static void main(String[] args) {
    FileHandle file = new FileHandle(args[0]);
    StringBuffer list = new StringBuffer();
    args[0] = args[0].replace("\\", "/");
    if (!args[0].endsWith("/"))
        args[0] = args[0] + "/";
    traverse(file, args[0], list);
    new FileHandle(args[0] + "/assets.txt").writeString(list.toString(), false);
}
