@Override
public final int bind(final GLTexture texture) {
    tempDesc.set(texture, null, null, null, null);
    return bindTexture(tempDesc, false);
}
