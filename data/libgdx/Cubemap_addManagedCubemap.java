private static void addManagedCubemap(Application app, Cubemap cubemap) {
    Array<Cubemap> managedCubemapArray = managedCubemaps.get(app);
    if (managedCubemapArray == null)
        managedCubemapArray = new Array<Cubemap>();
    managedCubemapArray.add(cubemap);
    managedCubemaps.put(app, managedCubemapArray);
}
