@Override
public int compare(Decal a, Decal b) {
    if (a.getZ() == b.getZ())
        return 0;
    return a.getZ() - b.getZ() < 0 ? -1 : 1;
}
