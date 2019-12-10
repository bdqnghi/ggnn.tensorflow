private void testInternal() throws IOException {
    FileHandle handle = Gdx.files.internal("data/badlogic.jpg");
    if (!handle.exists())
        fail("Couldn't find internal file");
    if (handle.isDirectory())
        fail("Internal file shouldn't be a directory");
    try {
        handle.delete();
        fail("Shouldn't be able to delete internal file");
    } catch (Exception expected) {
    }
    if (handle.list().length != 0)
        fail("File length shouldn't be 0");
    if (Gdx.app.getType() != ApplicationType.Android) {
        if (!handle.parent().exists())
            fail("Parent doesn't exist");
    }
    try {
        handle.read().close();
        fail();
    } catch (Exception ignored) {
    }
    FileHandle dir;
    if (Gdx.app.getType() == ApplicationType.Android || Gdx.app.getType() == ApplicationType.iOS)
        dir = Gdx.files.internal("data");
    else
        dir = Gdx.files.internal("../gdx-tests-android/assets/data");
    if (Gdx.app.getType() != ApplicationType.Android) {
        if (!dir.exists())
            fail();
    }
    if (!dir.isDirectory())
        fail();
    if (dir.list().length == 0)
        fail();
    FileHandle child = dir.child("badlogic.jpg");
    if (!child.name().equals("badlogic.jpg"))
        fail();
    if (!child.nameWithoutExtension().equals("badlogic"))
        fail();
    if (!child.extension().equals("jpg"))
        fail();
    if (Gdx.app.getType() != ApplicationType.Android) {
        if (!child.parent().exists())
            fail();
    }
    FileHandle copy = Gdx.files.external("badlogic.jpg-copy");
    copy.delete();
    if (copy.exists())
        fail();
    handle.copyTo(copy);
    if (!copy.exists())
        fail();
    if (copy.length() != 68465)
        fail();
    copy.delete();
    if (copy.exists())
        fail();
    handle.read().close();
    if (handle.readBytes().length != handle.length())
        fail();
}
