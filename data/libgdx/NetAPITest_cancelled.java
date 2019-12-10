@Override
public void cancelled() {
    Gdx.app.postRunnable(new Runnable() {

        public void run() {
            setButtonDisabled(false);
            Gdx.app.log("NetAPITest", "HTTP request cancelled");
            statusLabel.setText("HTTP request cancelled");
        }
    });
}
