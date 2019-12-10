@Override
public boolean equals(Object obj) {
    if (!(obj instanceof Dummy)) {
        throw new GdxRuntimeException("do not compare to anything but other Dummy objects");
    }
    Dummy d = (Dummy) obj;
    // we only care about position/distance
    float epsilon = 0.0001f;
    float diff = Math.abs(d.pos.x - this.pos.x) + Math.abs(d.pos.y - this.pos.y);
    if (diff > epsilon)
        return false;
    return true;
}
