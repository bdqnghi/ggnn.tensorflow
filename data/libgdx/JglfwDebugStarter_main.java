public static void main(String[] argv) {
    // this is only here for me to debug native code faster
    new SharedLibraryLoader("../../extensions/gdx-audio/libs/gdx-audio-natives.jar").load("gdx-audio");
    new SharedLibraryLoader("../../extensions/gdx-image/libs/gdx-image-natives.jar").load("gdx-image");
    new SharedLibraryLoader("../../extensions/gdx-freetype/libs/gdx-freetype-natives.jar").load("gdx-freetype");
    new SharedLibraryLoader("../../extensions/gdx-controllers/gdx-controllers-desktop/libs/gdx-controllers-desktop-natives.jar").load("gdx-controllers-desktop");
    new SharedLibraryLoader("../../gdx/libs/gdx-natives.jar").load("gdx");
    GdxTest test = new SuperKoalio();
    JglfwApplicationConfiguration config = new JglfwApplicationConfiguration();
    config.vSync = true;
    new JglfwApplication(test, config);
}
