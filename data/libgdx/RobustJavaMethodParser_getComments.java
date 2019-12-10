private ArrayList<JniSection> getComments(String classFile) {
    ArrayList<JniSection> sections = new ArrayList<JniSection>();
    boolean inComment = false;
    int start = 0;
    int startLine = 0;
    int line = 1;
    for (int i = 0; i < classFile.length() - 2; i++) {
        char c1 = classFile.charAt(i);
        char c2 = classFile.charAt(i + 1);
        char c3 = classFile.charAt(i + 2);
        if (c1 == '\n')
            line++;
        if (!inComment) {
            if (c1 == '/' && c2 == '*' && c3 != '*') {
                inComment = true;
                start = i;
                startLine = line;
            }
        } else {
            if (c1 == '*' && c2 == '/') {
                sections.add(new JniSection(classFile.substring(start + 2, i), startLine, line));
                inComment = false;
            }
        }
    }
    return sections;
}
