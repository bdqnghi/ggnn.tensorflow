@Override
public void consumeCustomData(int target) {
    for (int i = 0; i < mips.length; ++i) {
        GLTexture.uploadImageData(target, mips[i], i);
    }
}
