@Override
public int compare(Dummy o1, Dummy o2) {
    comparisonsMade++;
    float d1 = originDummy.pos.dst2(o1.pos);
    float d2 = originDummy.pos.dst2(o2.pos);
    float diff = d1 - d2;
    if (diff < 0)
        return -1;
    if (diff > 0)
        return 1;
    return 0;
}
