@Override
public void end() {
    if (currentMesh != null) {
        currentMesh.unbind(program, tempArray.items);
        currentMesh = null;
    }
    program.end();
}
