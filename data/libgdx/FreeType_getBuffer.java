/*
			return ((FT_Bitmap*)bitmap)->pitch;
		*/
public ByteBuffer getBuffer() {
    if (getRows() == 0)
        // So let's avoid this and just return a dummy non-null non-zero buffer
        return BufferUtils.newByteBuffer(1);
    return getBuffer(address);
}
