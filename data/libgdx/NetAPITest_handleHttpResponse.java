@Override
public void handleHttpResponse(HttpResponse httpResponse) {
    final int statusCode = httpResponse.getStatus().getStatusCode();
    // We are not in main thread right now so we need to post to main thread for ui updates
    Gdx.app.postRunnable(new Runnable() {

        @Override
        public void run() {
            statusLabel.setText("HTTP Request status: " + statusCode);
            setButtonDisabled(false);
        }
    });
    if (statusCode != 200) {
        Gdx.app.log("NetAPITest", "An error ocurred since statusCode is not OK");
        setText(httpResponse);
        return;
    }
    if (clickedButton == btnDownloadImage) {
        final byte[] rawImageBytes = httpResponse.getResult();
        Gdx.app.postRunnable(new Runnable() {

            public void run() {
                Pixmap pixmap = new Pixmap(rawImageBytes, 0, rawImageBytes.length);
                texture = new Texture(pixmap);
            }
        });
    } else if (clickedButton == btnDownloadLarge) {
        Gdx.app.postRunnable(new Runnable() {

            public void run() {
                text = "Retrieving large file...";
            }
        });
        final byte[] rawFileBytes = httpResponse.getResult();
        Gdx.app.postRunnable(new Runnable() {

            public void run() {
                text = "Retrieved large file: " + rawFileBytes.length;
            }
        });
    } else {
        setText(httpResponse);
    }
}
