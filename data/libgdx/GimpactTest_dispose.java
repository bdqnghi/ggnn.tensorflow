@Override
public void dispose() {
    super.dispose();
    chassisVertexArray.dispose();
    chassisVertexArray = null;
    ground = null;
}
