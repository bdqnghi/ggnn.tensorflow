private void createProxy(JClassType type) {
    ClassSourceFileComposerFactory composer = new ClassSourceFileComposerFactory(type.getPackage().getName(), type.getSimpleSourceName() + "Proxy");
    PrintWriter printWriter = context.tryCreate(logger, packageName, simpleName);
    if (printWriter == null) {
        return;
    }
    SourceWriter writer = composer.createSourceWriter(context, printWriter);
    writer.commit(logger);
}
