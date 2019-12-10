@Override
public boolean isExternalStorageAvailable() {
    return Environment.getExternalStorageState().equals(Environment.MEDIA_MOUNTED);
}
