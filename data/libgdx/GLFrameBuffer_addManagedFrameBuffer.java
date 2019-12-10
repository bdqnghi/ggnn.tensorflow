private static void addManagedFrameBuffer(Application app, GLFrameBuffer frameBuffer) {
    Array<GLFrameBuffer> managedResources = buffers.get(app);
    if (managedResources == null)
        managedResources = new Array<GLFrameBuffer>();
    managedResources.add(frameBuffer);
    buffers.put(app, managedResources);
}
