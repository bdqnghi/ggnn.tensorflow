@Override
public void create() {
    batch = new SpriteBatch();
    HttpRequest request = new HttpRequest(HttpMethods.GET);
    request.setUrl("https://www.google.at/images/srpr/logo11w.png");
    Gdx.net.sendHttpRequest(request, new HttpResponseListener() {

        @Override
        public void handleHttpResponse(HttpResponse httpResponse) {
            final byte[] bytes = httpResponse.getResult();
            Gdx.app.postRunnable(new Runnable() {

                @Override
                public void run() {
                    Pixmap pixmap = new Pixmap(bytes, 0, bytes.length);
                    texture = new Texture(new PixmapTextureData(pixmap, pixmap.getFormat(), false, false, true));
                }
            });
        }

        @Override
        public void failed(Throwable t) {
            t.printStackTrace();
            Gdx.app.log("EmptyDownloadTest", "Failed", t);
        }

        @Override
        public void cancelled() {
            Gdx.app.log("EmptyDownloadTest", "Cancelled");
        }
    });
}
