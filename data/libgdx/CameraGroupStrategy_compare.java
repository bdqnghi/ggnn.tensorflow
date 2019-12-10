@Override
public int compare(Decal o1, Decal o2) {
    float dist1 = camera.position.dst(o1.position);
    float dist2 = camera.position.dst(o2.position);
    return (int) Math.signum(dist2 - dist1);
}
