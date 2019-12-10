@Override
public void create() {
    if (thread == null) {
        final AudioDevice device = Gdx.app.getAudio().newAudioDevice(44100, false);
        thread = new Thread(new Runnable() {

            @Override
            public void run() {
                final float frequency = 440;
                // angular increment for each sample
                float increment = (float) (2 * Math.PI) * frequency / 44100;
                float angle = 0;
                float[] samples = new float[1024];
                while (!stop) {
                    for (int i = 0; i < samples.length; i += 2) {
                        samples[i] = 0.5f * (float) Math.sin(angle);
                        samples[i + 1] = 2 * samples[i];
                        angle += increment;
                    }
                    device.writeSamples(samples, 0, samples.length);
                }
                device.dispose();
            }
        });
        thread.start();
    }
}
