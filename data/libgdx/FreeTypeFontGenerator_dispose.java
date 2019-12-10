@Override
public void dispose() {
    if (stroker != null)
        stroker.dispose();
    if (packer != null)
        packer.dispose();
}
