private static final void traverse(FileHandle directory, String base, StringBuffer list) {
    if (directory.name().equals(".svn"))
        return;
    String dirName = directory.toString().replace("\\", "/").replace(base, "") + "/";
    System.out.println(dirName);
    for (FileHandle file : directory.list()) {
        if (file.isDirectory()) {
            traverse(file, base, list);
        } else {
            String fileName = file.toString().replace("\\", "/").replace(base, "");
            if (fileName.endsWith(".png") || fileName.endsWith(".jpg") || fileName.endsWith(".jpeg")) {
                list.append("i:" + fileName + "\n");
                System.out.println(fileName);
            } else if (fileName.endsWith(".glsl") || fileName.endsWith(".fnt") || fileName.endsWith(".pack") || fileName.endsWith(".obj") || file.extension().equals("") || fileName.endsWith("txt")) {
                list.append("t:" + fileName + "\n");
                System.out.println(fileName);
            } else {
                if (fileName.endsWith(".mp3") || fileName.endsWith(".ogg") || fileName.endsWith(".wav"))
                    continue;
                list.append("b:" + fileName + "\n");
                System.out.println(fileName);
            }
        }
    }
}
