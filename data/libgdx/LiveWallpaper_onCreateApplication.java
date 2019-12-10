@Override
public void onCreateApplication() {
    super.onCreateApplication();
    AndroidApplicationConfiguration config = new AndroidApplicationConfiguration();
    ApplicationListener listener = new MyLiveWallpaperListener();
    initialize(listener, config);
}
