@Override
public boolean isManaged() {
    for (TextureData data : this.data) if (!data.isManaged())
        return false;
    return true;
}
