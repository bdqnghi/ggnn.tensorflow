@Override
public void exit() {
    postRunnable(new Runnable() {

        @Override
        public void run() {
            LwjglCanvas.this.listener.pause();
            LwjglCanvas.this.listener.dispose();
            if (audio != null)
                audio.dispose();
            System.exit(-1);
        }
    });
}
