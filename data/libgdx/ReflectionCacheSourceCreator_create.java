public String create() {
    ClassSourceFileComposerFactory composer = new ClassSourceFileComposerFactory(packageName, simpleName);
    composer.addImplementedInterface("com.badlogic.gwtref.client.IReflectionCache");
    imports(composer);
    PrintWriter printWriter = context.tryCreate(logger, packageName, simpleName);
    if (printWriter == null) {
        return packageName + "." + simpleName;
    }
    sw = composer.createSourceWriter(context, printWriter);
    generateLookups();
    forNameC();
    newArrayC();
    getArrayLengthT();
    getArrayElementT();
    setArrayElementT();
    getF();
    setF();
    invokeM();
    sw.commit(logger);
    createProxy(type);
    return packageName + "." + simpleName;
}
