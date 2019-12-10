private void load(TextureRegion[] patches) {
    // placeholder color, overwritten at draw time
    final float color = Color.WHITE.toFloatBits();
    if (patches[BOTTOM_LEFT] != null) {
        bottomLeft = add(patches[BOTTOM_LEFT], color, false, false);
        leftWidth = patches[BOTTOM_LEFT].getRegionWidth();
        bottomHeight = patches[BOTTOM_LEFT].getRegionHeight();
    }
    if (patches[BOTTOM_CENTER] != null) {
        bottomCenter = add(patches[BOTTOM_CENTER], color, true, false);
        middleWidth = Math.max(middleWidth, patches[BOTTOM_CENTER].getRegionWidth());
        bottomHeight = Math.max(bottomHeight, patches[BOTTOM_CENTER].getRegionHeight());
    }
    if (patches[BOTTOM_RIGHT] != null) {
        bottomRight = add(patches[BOTTOM_RIGHT], color, false, false);
        rightWidth = Math.max(rightWidth, patches[BOTTOM_RIGHT].getRegionWidth());
        bottomHeight = Math.max(bottomHeight, patches[BOTTOM_RIGHT].getRegionHeight());
    }
    if (patches[MIDDLE_LEFT] != null) {
        middleLeft = add(patches[MIDDLE_LEFT], color, false, true);
        leftWidth = Math.max(leftWidth, patches[MIDDLE_LEFT].getRegionWidth());
        middleHeight = Math.max(middleHeight, patches[MIDDLE_LEFT].getRegionHeight());
    }
    if (patches[MIDDLE_CENTER] != null) {
        middleCenter = add(patches[MIDDLE_CENTER], color, true, true);
        middleWidth = Math.max(middleWidth, patches[MIDDLE_CENTER].getRegionWidth());
        middleHeight = Math.max(middleHeight, patches[MIDDLE_CENTER].getRegionHeight());
    }
    if (patches[MIDDLE_RIGHT] != null) {
        middleRight = add(patches[MIDDLE_RIGHT], color, false, true);
        rightWidth = Math.max(rightWidth, patches[MIDDLE_RIGHT].getRegionWidth());
        middleHeight = Math.max(middleHeight, patches[MIDDLE_RIGHT].getRegionHeight());
    }
    if (patches[TOP_LEFT] != null) {
        topLeft = add(patches[TOP_LEFT], color, false, false);
        leftWidth = Math.max(leftWidth, patches[TOP_LEFT].getRegionWidth());
        topHeight = Math.max(topHeight, patches[TOP_LEFT].getRegionHeight());
    }
    if (patches[TOP_CENTER] != null) {
        topCenter = add(patches[TOP_CENTER], color, true, false);
        middleWidth = Math.max(middleWidth, patches[TOP_CENTER].getRegionWidth());
        topHeight = Math.max(topHeight, patches[TOP_CENTER].getRegionHeight());
    }
    if (patches[TOP_RIGHT] != null) {
        topRight = add(patches[TOP_RIGHT], color, false, false);
        rightWidth = Math.max(rightWidth, patches[TOP_RIGHT].getRegionWidth());
        topHeight = Math.max(topHeight, patches[TOP_RIGHT].getRegionHeight());
    }
    if (idx < vertices.length) {
        float[] newVertices = new float[idx];
        System.arraycopy(vertices, 0, newVertices, 0, idx);
        vertices = newVertices;
    }
}
