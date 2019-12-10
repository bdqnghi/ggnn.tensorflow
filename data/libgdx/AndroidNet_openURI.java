@Override
public boolean openURI(String URI) {
    boolean result = false;
    final Uri uri = Uri.parse(URI);
    Intent intent = new Intent(Intent.ACTION_VIEW, uri);
    PackageManager pm = app.getContext().getPackageManager();
    if (pm.resolveActivity(intent, PackageManager.MATCH_DEFAULT_ONLY) != null) {
        app.runOnUiThread(new Runnable() {

            @Override
            public void run() {
                Intent intent = new Intent(Intent.ACTION_VIEW, uri);
                // LiveWallpaper and Daydream applications need this flag
                if (!(app.getContext() instanceof Activity))
                    intent.addFlags(Intent.FLAG_ACTIVITY_NEW_TASK);
                app.startActivity(intent);
            }
        });
        result = true;
    }
    return result;
}
