@Override
public void onCompletion(MediaPlayer mp) {
    if (onCompletionListener != null) {
        Gdx.app.postRunnable(new Runnable() {

            @Override
            public void run() {
                onCompletionListener.onCompletion(AndroidMusic.this);
            }
        });
    }
}
