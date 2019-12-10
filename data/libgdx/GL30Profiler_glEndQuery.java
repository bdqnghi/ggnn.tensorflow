@Override
public void glEndQuery(int target) {
    calls++;
    gl30.glEndQuery(target);
    check();
}
