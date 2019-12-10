@Override
public void uncaughtException(Thread t, Throwable e) {
    if (expectIt) {
        Gdx.app.log(TAG, "PASSED: " + e.getMessage());
    } else {
        Gdx.app.log(TAG, "FAILED!  Unexpected exception received.");
        e.printStackTrace(System.err);
    }
}
