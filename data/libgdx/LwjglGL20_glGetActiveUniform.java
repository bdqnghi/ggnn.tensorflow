public String glGetActiveUniform(int program, int index, IntBuffer size, Buffer type) {
    // FIXME this is less than ideal of course...
    IntBuffer typeTmp = BufferUtils.createIntBuffer(2);
    String name = GL20.glGetActiveUniform(program, index, 256, typeTmp);
    size.put(typeTmp.get(0));
    if (type instanceof IntBuffer)
        ((IntBuffer) type).put(typeTmp.get(1));
    return name;
}
