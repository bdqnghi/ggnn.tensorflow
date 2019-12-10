public Int32Array copy(IntBuffer buffer) {
    if (GWT.isProdMode()) {
        return ((Int32Array) ((HasArrayBufferView) buffer).getTypedArray()).subarray(buffer.position(), buffer.remaining());
    } else {
        ensureCapacity(buffer);
        for (int i = buffer.position(), j = 0; i < buffer.limit(); i++, j++) {
            intBuffer.set(j, buffer.get(i));
        }
        return intBuffer.subarray(0, buffer.remaining());
    }
}
