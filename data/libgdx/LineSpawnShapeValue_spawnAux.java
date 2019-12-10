@Override
public void spawnAux(Vector3 vector, float percent) {
    float width = spawnWidth + (spawnWidthDiff * spawnWidthValue.getScale(percent));
    float height = spawnHeight + (spawnHeightDiff * spawnHeightValue.getScale(percent));
    float depth = spawnDepth + (spawnDepthDiff * spawnDepthValue.getScale(percent));
    float a = MathUtils.random();
    vector.x = a * width;
    vector.y = a * height;
    vector.z = a * depth;
}
