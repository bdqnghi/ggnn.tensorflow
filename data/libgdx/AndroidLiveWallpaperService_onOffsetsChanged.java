@Override
public void onOffsetsChanged(final float xOffset, final float yOffset, final float xOffsetStep, final float yOffsetStep, final int xPixelOffset, final int yPixelOffset) {
    // it spawns too frequent on some devices - its annoying!
    // if (DEBUG)
    // Log.d(TAG, " > AndroidWallpaperEngine - onOffsetChanged(" + xOffset + " " + yOffset + " " + xOffsetStep + " "
    // + yOffsetStep + " " + xPixelOffset + " " + yPixelOffset + ") " + hashCode() + ", linkedApp: " + (linkedApp != null));
    this.offsetsConsumed = false;
    this.xOffset = xOffset;
    this.yOffset = yOffset;
    this.xOffsetStep = xOffsetStep;
    this.yOffsetStep = yOffsetStep;
    this.xPixelOffset = xPixelOffset;
    this.yPixelOffset = yPixelOffset;
    // can fail if linkedApp == null, so we repeat it in Engine.onResume
    notifyOffsetsChanged();
    if (!Gdx.graphics.isContinuousRendering()) {
        Gdx.graphics.requestRendering();
    }
    super.onOffsetsChanged(xOffset, yOffset, xOffsetStep, yOffsetStep, xPixelOffset, yPixelOffset);
}
