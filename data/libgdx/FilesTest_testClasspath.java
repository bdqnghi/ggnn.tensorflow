private void testClasspath() throws IOException {
    // no classpath support on ios
    if (Gdx.app.getType() == ApplicationType.iOS)
        return;
    FileHandle handle = Gdx.files.classpath("com/badlogic/gdx/utils/arial-15.png");
    if (!handle.exists())
        fail();
    if (handle.isDirectory())
        fail();
    try {
        handle.delete();
        fail();
    } catch (Exception expected) {
    }
    try {
        handle.list();
        fail();
    } catch (Exception expected) {
    }
    try {
        handle.read().close();
        fail();
    } catch (Exception ignored) {
    }
    FileHandle dir = Gdx.files.classpath("com/badlogic/gdx/utils");
    if (dir.isDirectory())
        fail();
    FileHandle child = dir.child("arial-15.fnt");
    if (!child.name().equals("arial-15.fnt"))
        fail();
    if (!child.nameWithoutExtension().equals("arial-15"))
        fail();
    if (!child.extension().equals("fnt"))
        fail();
    handle.read().close();
    if (handle.readBytes().length != handle.length())
        fail();
}
