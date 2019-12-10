public String getBufferCType() {
    if (!this.isBuffer())
        throw new RuntimeException("ArgumentType " + this + " is not a Buffer!");
    if (this == Buffer)
        return "unsigned char*";
    if (this == ByteBuffer)
        return "char*";
    if (this == CharBuffer)
        return "unsigned short*";
    if (this == ShortBuffer)
        return "short*";
    if (this == IntBuffer)
        return "int*";
    if (this == LongBuffer)
        return "long long*";
    if (this == FloatBuffer)
        return "float*";
    if (this == DoubleBuffer)
        return "double*";
    throw new RuntimeException("Unknown Buffer type " + this);
}
