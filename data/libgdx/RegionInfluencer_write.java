@Override
public void write(Json json) {
    json.writeValue("regions", regions, Array.class, AspectTextureRegion.class);
}
