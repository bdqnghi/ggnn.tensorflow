private ArrayList<JniSection> getJniSections(String classFile) {
    ArrayList<JniSection> sections = getComments(classFile);
    Iterator<JniSection> iter = sections.iterator();
    while (iter.hasNext()) {
        JniSection section = iter.next();
        if (!section.getNativeCode().startsWith("JNI")) {
            iter.remove();
        } else {
            section.setNativeCode(section.getNativeCode().substring(3));
        }
    }
    return sections;
}
