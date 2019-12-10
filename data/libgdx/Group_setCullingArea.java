/**
 * Children completely outside of this rectangle will not be drawn. This is only valid for use with unrotated and unscaled
 * actors!
 * @param cullingArea May be null.
 */
public void setCullingArea(Rectangle cullingArea) {
    this.cullingArea = cullingArea;
}
