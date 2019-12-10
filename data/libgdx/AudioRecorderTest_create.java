@Override
public void create() {
    device = Gdx.audio.newAudioDevice(44100, true);
    recorder = Gdx.audio.newAudioRecorder(44100, true);
    Thread t = new Thread(new Runnable() {

        @Override
        public void run() {
            while (true) {
                recorder.read(samples, 0, samples.length);
                device.writeSamples(samples, 0, samples.length);
            }
        }
    });
    t.setDaemon(true);
    t.start();
}
