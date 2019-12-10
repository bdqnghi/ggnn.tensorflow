@Override
public void create() {
    font = new BitmapFont(Gdx.files.internal("data/arial-15.fnt"), false);
    batch = new SpriteBatch();
    if (Gdx.files.isExternalStorageAvailable()) {
        message += "External storage available\n";
        message += "External storage path: " + Gdx.files.getExternalStoragePath() + "\n";
        try {
            InputStream in = Gdx.files.internal("data/cube.obj").read();
            StreamUtils.closeQuietly(in);
            message += "Open internal success\n";
        } catch (Throwable e) {
            message += "Couldn't open internal data/cube.obj\n" + e.getMessage() + "\n";
        }
        BufferedWriter out = null;
        try {
            out = new BufferedWriter(new OutputStreamWriter(Gdx.files.external("test.txt").write(false)));
            out.write("test");
            message += "Write external success\n";
        } catch (GdxRuntimeException ex) {
            message += "Couldn't open externalstorage/test.txt\n";
        } catch (IOException e) {
            message += "Couldn't write externalstorage/test.txt\n";
        } finally {
            StreamUtils.closeQuietly(out);
        }
        try {
            InputStream in = Gdx.files.external("test.txt").read();
            StreamUtils.closeQuietly(in);
            message += "Open external success\n";
        } catch (Throwable e) {
            message += "Couldn't open internal externalstorage/test.txt\n" + e.getMessage() + "\n";
        }
        BufferedReader in = null;
        try {
            in = new BufferedReader(new InputStreamReader(Gdx.files.external("test.txt").read()));
            if (!in.readLine().equals("test"))
                message += "Read result wrong\n";
            else
                message += "Read external success\n";
        } catch (GdxRuntimeException ex) {
            message += "Couldn't open externalstorage/test.txt\n";
        } catch (IOException e) {
            message += "Couldn't read externalstorage/test.txt\n";
        } finally {
            StreamUtils.closeQuietly(in);
        }
        if (!Gdx.files.external("test.txt").delete())
            message += "Couldn't delete externalstorage/test.txt";
    } else {
        message += "External storage not available";
    }
    if (Gdx.files.isLocalStorageAvailable()) {
        message += "Local storage available\n";
        message += "Local storage path: " + Gdx.files.getLocalStoragePath() + "\n";
        BufferedWriter out = null;
        try {
            out = new BufferedWriter(new OutputStreamWriter(Gdx.files.local("test.txt").write(false)));
            out.write("test");
            message += "Write local success\n";
        } catch (GdxRuntimeException ex) {
            message += "Couldn't open localstorage/test.txt\n";
        } catch (IOException e) {
            message += "Couldn't write localstorage/test.txt\n";
        } finally {
            StreamUtils.closeQuietly(out);
        }
        try {
            InputStream in = Gdx.files.local("test.txt").read();
            StreamUtils.closeQuietly(in);
            message += "Open local success\n";
        } catch (Throwable e) {
            message += "Couldn't open localstorage/test.txt\n" + e.getMessage() + "\n";
        }
        BufferedReader in = null;
        try {
            in = new BufferedReader(new InputStreamReader(Gdx.files.local("test.txt").read()));
            if (!in.readLine().equals("test"))
                message += "Read result wrong\n";
            else
                message += "Read local success\n";
        } catch (GdxRuntimeException ex) {
            message += "Couldn't open localstorage/test.txt\n";
        } catch (IOException e) {
            message += "Couldn't read localstorage/test.txt\n";
        } finally {
            StreamUtils.closeQuietly(in);
        }
        try {
            byte[] testBytes = Gdx.files.local("test.txt").readBytes();
            if (Arrays.equals("test".getBytes(), testBytes))
                message += "Read into byte array success\n";
            else
                fail();
        } catch (Throwable e) {
            message += "Couldn't read localstorage/test.txt\n" + e.getMessage() + "\n";
        }
        if (!Gdx.files.local("test.txt").delete())
            message += "Couldn't delete localstorage/test.txt";
    }
    try {
        testClasspath();
        testInternal();
        testExternal();
        testAbsolute();
        testLocal();
    } catch (IOException ex) {
        throw new RuntimeException(ex);
    }
}
