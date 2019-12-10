private ArrayList<JniSection> getNativeCodeBodies(String classFile) {
    ArrayList<JniSection> sections = getComments(classFile);
    Iterator<JniSection> iter = sections.iterator();
    while (iter.hasNext()) {
        JniSection section = iter.next();
        if (section.getNativeCode().startsWith("JNI"))
            iter.remove();
        if (section.getNativeCode().startsWith("-{"))
            iter.remove();
    }
    return sections;
}
