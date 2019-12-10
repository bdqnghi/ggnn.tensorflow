@Override
public int decideGroup(Decal decal) {
    return decal.getMaterial().isOpaque() ? GROUP_OPAQUE : GROUP_BLEND;
}
