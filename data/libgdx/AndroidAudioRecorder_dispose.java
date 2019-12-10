@Override
public void dispose() {
    recorder.stop();
    recorder.release();
}
