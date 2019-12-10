private boolean checkForBitmapFont() {
    int faceFlags = face.getFaceFlags();
    if (((faceFlags & FreeType.FT_FACE_FLAG_FIXED_SIZES) == FreeType.FT_FACE_FLAG_FIXED_SIZES) && ((faceFlags & FreeType.FT_FACE_FLAG_HORIZONTAL) == FreeType.FT_FACE_FLAG_HORIZONTAL)) {
        if (loadChar(32)) {
            GlyphSlot slot = face.getGlyph();
            if (slot.getFormat() == 1651078259) {
                bitmapped = true;
            }
        }
    }
    return bitmapped;
}
