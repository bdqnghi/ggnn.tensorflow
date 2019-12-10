@Override
public void didFinishPlaying(NSObject player, boolean success) {
    final OnCompletionListener listener = onCompletionListener;
    if (listener != null) {
        Gdx.app.postRunnable(new Runnable() {

            @Override
            public void run() {
                listener.onCompletion(IOSMusic.this);
            }
        });
    }
}
