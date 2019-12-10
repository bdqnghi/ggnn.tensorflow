@Override
public void start() {
    spawnWidth = spawnWidthValue.newLowValue();
    spawnWidthDiff = spawnWidthValue.newHighValue();
    if (!spawnWidthValue.isRelative())
        spawnWidthDiff -= spawnWidth;
    spawnHeight = spawnHeightValue.newLowValue();
    spawnHeightDiff = spawnHeightValue.newHighValue();
    if (!spawnHeightValue.isRelative())
        spawnHeightDiff -= spawnHeight;
    spawnDepth = spawnDepthValue.newLowValue();
    spawnDepthDiff = spawnDepthValue.newHighValue();
    if (!spawnDepthValue.isRelative())
        spawnDepthDiff -= spawnDepth;
}
