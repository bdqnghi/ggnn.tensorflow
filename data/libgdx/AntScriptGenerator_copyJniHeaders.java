private void copyJniHeaders(String jniDir) {
    final String pack = "com/badlogic/gdx/jnigen/resources/headers";
    String[] files = { "classfile_constants.h", "jawt.h", "jdwpTransport.h", "jni.h", "linux/jawt_md.h", "linux/jni_md.h", "mac/jni_md.h", "win32/jawt_md.h", "win32/jni_md.h" };
    for (String file : files) {
        new FileDescriptor(pack, FileType.Classpath).child(file).copyTo(new FileDescriptor(jniDir).child("jni-headers").child(file));
    }
}
