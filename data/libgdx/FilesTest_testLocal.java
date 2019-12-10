private void testLocal() throws IOException {
    String path = "meow";
    FileHandle handle = Gdx.files.local(path);
    handle.delete();
    if (handle.exists())
        fail();
    if (handle.isDirectory())
        fail();
    if (handle.delete())
        fail();
    if (handle.list().length != 0)
        fail();
    if (handle.child("meow").exists())
        fail();
    if (!handle.parent().exists())
        fail();
    try {
        handle.read().close();
        fail();
    } catch (Exception ignored) {
    }
    handle.mkdirs();
    if (!handle.exists())
        fail();
    if (!handle.isDirectory())
        fail();
    if (handle.list().length != 0)
        fail();
    handle.child("meow").mkdirs();
    if (handle.list().length != 1)
        fail();
    FileHandle child = handle.list()[0];
    if (!child.name().equals("meow"))
        fail();
    if (!child.parent().exists())
        fail();
    if (!handle.deleteDirectory())
        fail();
    if (handle.exists())
        fail();
    OutputStream output = handle.write(false);
    output.write("moo".getBytes());
    output.close();
    if (!handle.exists())
        fail();
    if (handle.length() != 3)
        fail();
    FileHandle copy = Gdx.files.local(path + "-copy");
    copy.delete();
    if (copy.exists())
        fail();
    handle.copyTo(copy);
    if (!copy.exists())
        fail();
    if (copy.length() != 3)
        fail();
    FileHandle move = Gdx.files.local(path + "-move");
    move.delete();
    if (move.exists())
        fail();
    copy.moveTo(move);
    if (!move.exists())
        fail();
    if (move.length() != 3)
        fail();
    move.deleteDirectory();
    if (move.exists())
        fail();
    InputStream input = handle.read();
    byte[] bytes = new byte[6];
    if (input.read(bytes) != 3)
        fail();
    input.close();
    if (!new String(bytes, 0, 3).equals("moo"))
        fail();
    output = handle.write(true);
    output.write("cow".getBytes());
    output.close();
    if (handle.length() != 6)
        fail();
    input = handle.read();
    if (input.read(bytes) != 6)
        fail();
    input.close();
    if (!new String(bytes, 0, 6).equals("moocow"))
        fail();
    if (handle.isDirectory())
        fail();
    if (handle.list().length != 0)
        fail();
    if (!handle.name().equals("meow"))
        fail();
    if (!handle.nameWithoutExtension().equals("meow"))
        fail();
    if (!handle.extension().equals(""))
        fail();
    handle.deleteDirectory();
    if (handle.exists())
        fail();
    if (handle.isDirectory())
        fail();
    handle.delete();
    handle.deleteDirectory();
}
