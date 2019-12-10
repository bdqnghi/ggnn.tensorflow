/**
 * @return true if the material is completely opaque, false if it is not and therefor requires blending
 */
public boolean isOpaque() {
    return srcBlendFactor == NO_BLEND;
}
