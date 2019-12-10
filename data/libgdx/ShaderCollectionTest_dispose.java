@Override
public void dispose() {
    shaderBatch.dispose();
    shaderBatch = null;
    shaderProvider = null;
    if (cubemap != null)
        cubemap.dispose();
    cubemap = null;
    super.dispose();
}
