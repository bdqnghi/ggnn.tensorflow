@Override
public void create() {
    FileHandle handle = Gdx.files.internal("data/arial.ttf");
    bytes = new byte[(int) handle.length()];
    DataInputStream in = new DataInputStream(handle.read());
    for (int i = 0; i < 100; i++) {
        try {
            bytes[i] = in.readByte();
        } catch (IOException e) {
            e.printStackTrace();
        }
    }
}
