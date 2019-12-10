@Override
public void line(Vector3 p1, Color c1, Vector3 p2, Color c2) {
    line(vertTmp1.set(p1, null, c1, null), vertTmp2.set(p2, null, c2, null));
}
