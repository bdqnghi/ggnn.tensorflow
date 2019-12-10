private void addManagedShader(Application app, ShaderProgram shaderProgram) {
    Array<ShaderProgram> managedResources = shaders.get(app);
    if (managedResources == null)
        managedResources = new Array<ShaderProgram>();
    managedResources.add(shaderProgram);
    shaders.put(app, managedResources);
}
