public void set(float[] data, int offset) {
    if (this.data.length > (data.length - offset))
        throw new GdxRuntimeException("Incorrect data size");
    System.arraycopy(data, offset, this.data, 0, this.data.length);
    update();
}
