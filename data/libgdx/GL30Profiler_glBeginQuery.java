@Override
public void glBeginQuery(int target, int id) {
    calls++;
    gl30.glBeginQuery(target, id);
    check();
}
