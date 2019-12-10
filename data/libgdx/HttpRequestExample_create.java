@Override
public void create() {
    HttpRequest request = new HttpRequest(HttpMethods.GET);
    request.setUrl("http://libgdx.badlogicgames.com/nightlies/dist/AUTHORS");
    Gdx.net.sendHttpRequest(request, new HttpResponseListener() {

        @Override
        public void handleHttpResponse(HttpResponse httpResponse) {
            Gdx.app.log("HttpRequestExample", "response: " + httpResponse.getResultAsString());
        }

        @Override
        public void failed(Throwable t) {
            Gdx.app.error("HttpRequestExample", "something went wrong", t);
        }

        @Override
        public void cancelled() {
            Gdx.app.log("HttpRequestExample", "cancelled");
        }
    });
}
