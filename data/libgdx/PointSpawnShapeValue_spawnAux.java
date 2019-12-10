@Override
public void spawnAux(Vector3 vector, float percent) {
    vector.x = spawnWidth + (spawnWidthDiff * spawnWidthValue.getScale(percent));
    vector.y = spawnHeight + (spawnHeightDiff * spawnHeightValue.getScale(percent));
    vector.z = spawnDepth + (spawnDepthDiff * spawnDepthValue.getScale(percent));
}
