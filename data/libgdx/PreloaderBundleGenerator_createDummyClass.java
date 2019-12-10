private String createDummyClass(TreeLogger logger, GeneratorContext context) {
    String packageName = "com.badlogic.gdx.backends.gwt.preloader";
    String className = "PreloaderBundleImpl";
    ClassSourceFileComposerFactory composer = new ClassSourceFileComposerFactory(packageName, className);
    composer.addImplementedInterface(packageName + ".PreloaderBundle");
    PrintWriter printWriter = context.tryCreate(logger, packageName, className);
    if (printWriter == null) {
        return packageName + "." + className;
    }
    SourceWriter sourceWriter = composer.createSourceWriter(context, printWriter);
    sourceWriter.commit(logger);
    return packageName + "." + className;
}
