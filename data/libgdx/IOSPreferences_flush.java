@Override
public void flush() {
    boolean fileWritten = nsDictionary.write(new File(filePath), false);
    if (fileWritten)
        Gdx.app.debug("IOSPreferences", "NSDictionary file written");
    else
        Gdx.app.debug("IOSPreferences", "Failed to write NSDictionary to file " + filePath);
}
