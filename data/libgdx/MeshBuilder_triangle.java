@Override
public void triangle(Vector3 p1, Color c1, Vector3 p2, Color c2, Vector3 p3, Color c3) {
    triangle(vertTmp1.set(p1, null, c1, null), vertTmp2.set(p2, null, c2, null), vertTmp3.set(p3, null, c3, null));
}
