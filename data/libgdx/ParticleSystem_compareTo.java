@Override
public int compareTo(Proxy o) {
    return (tag - o.tag) < 0 ? -1 : (o.tag == tag ? 0 : 1);
}
