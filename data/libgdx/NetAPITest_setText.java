void setText(HttpResponse httpResponse) {
    final String newText = httpResponse.getResultAsString();
    Gdx.app.postRunnable(new Runnable() {

        public void run() {
            text = newText;
        }
    });
}
