@Override
public Vector3 setLength2(float len2) {
    float oldLen2 = len2();
    return (oldLen2 == 0 || oldLen2 == len2) ? this : scl((float) Math.sqrt(len2 / oldLen2));
}
