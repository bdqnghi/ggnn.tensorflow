private void alignMethodBodies(ArrayList<JavaMethod> methods, ArrayList<JniSection> methodBodies) {
    for (JavaMethod method : methods) {
        for (JniSection section : methodBodies) {
            if (method.getEndIndex() == section.getStartIndex()) {
                if (section.getNativeCode().startsWith(JNI_MANUAL)) {
                    section.setNativeCode(section.getNativeCode().substring(JNI_MANUAL.length()));
                    method.setManual(true);
                }
                method.setNativeCode(section.getNativeCode());
                break;
            }
        }
    }
}
