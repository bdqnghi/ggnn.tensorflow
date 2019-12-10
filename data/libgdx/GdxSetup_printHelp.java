private static void printHelp() {
    System.out.println("Usage: GdxSetup --dir <dir-name> --name <app-name> --package <package> --mainClass <mainClass> --sdkLocation <SDKLocation>");
    System.out.println("dir ... the directory to write the project files to");
    System.out.println("name ... the name of the application");
    System.out.println("package ... the Java package name of the application");
    System.out.println("mainClass ... the name of your main ApplicationListener");
    System.out.println("sdkLocation ... the location of your android SDK. Uses ANDROID_HOME if not specified");
}
