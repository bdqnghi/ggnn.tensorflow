public boolean touchUp(int x, int y, int pointer, int button) {
    ParticleEditor.this.dispatchEvent(new WindowEvent(ParticleEditor.this, WindowEvent.WINDOW_LOST_FOCUS));
    ParticleEditor.this.dispatchEvent(new WindowEvent(ParticleEditor.this, WindowEvent.WINDOW_GAINED_FOCUS));
    ParticleEditor.this.requestFocusInWindow();
    return false;
}
