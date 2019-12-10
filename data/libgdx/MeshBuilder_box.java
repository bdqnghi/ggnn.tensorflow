@Override
public void box(float x, float y, float z, float width, float height, float depth) {
    box(matTmp1.setToScaling(width, height, depth).trn(x, y, z));
}
