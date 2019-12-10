public void build(ProjectBuilder builder, String outputDir, String appName, String packageName, String mainClass, String sdkLocation, CharCallback callback, List<String> gradleArgs) {
    Project project = new Project();
    String packageDir = packageName.replace('.', '/');
    String sdkPath = sdkLocation.replace('\\', '/');
    if (!isSdkLocationValid(sdkLocation)) {
        System.out.println("Android SDK location '" + sdkLocation + "' doesn't contain an SDK");
    }
    // root dir/gradle files
    project.files.add(new ProjectFile("gitignore", ".gitignore", false));
    project.files.add(new TemporaryProjectFile(builder.settingsFile, "settings.gradle", false));
    project.files.add(new TemporaryProjectFile(builder.buildFile, "build.gradle", true));
    project.files.add(new ProjectFile("gradlew", false));
    project.files.add(new ProjectFile("gradlew.bat", false));
    project.files.add(new ProjectFile("gradle/wrapper/gradle-wrapper.jar", false));
    project.files.add(new ProjectFile("gradle/wrapper/gradle-wrapper.properties", false));
    project.files.add(new ProjectFile("gradle.properties"));
    // core project
    project.files.add(new ProjectFile("core/build.gradle"));
    project.files.add(new ProjectFile("core/src/MainClass", "core/src/" + packageDir + "/" + mainClass + ".java", true));
    if (builder.modules.contains(ProjectType.HTML)) {
        project.files.add(new ProjectFile("core/CoreGdxDefinition", "core/src/" + mainClass + ".gwt.xml", true));
    }
    // desktop project
    if (builder.modules.contains(ProjectType.DESKTOP)) {
        project.files.add(new ProjectFile("desktop/build.gradle"));
        project.files.add(new ProjectFile("desktop/src/DesktopLauncher", "desktop/src/" + packageDir + "/desktop/DesktopLauncher.java", true));
    }
    // Assets
    String assetPath = builder.modules.contains(ProjectType.ANDROID) ? "android/assets" : "core/assets";
    project.files.add(new ProjectFile("android/assets/badlogic.jpg", assetPath + "/badlogic.jpg", false));
    // android project
    if (builder.modules.contains(ProjectType.ANDROID)) {
        project.files.add(new ProjectFile("android/res/values/strings.xml"));
        project.files.add(new ProjectFile("android/res/values/styles.xml", false));
        project.files.add(new ProjectFile("android/res/drawable-hdpi/ic_launcher.png", false));
        project.files.add(new ProjectFile("android/res/drawable-mdpi/ic_launcher.png", false));
        project.files.add(new ProjectFile("android/res/drawable-xhdpi/ic_launcher.png", false));
        project.files.add(new ProjectFile("android/res/drawable-xxhdpi/ic_launcher.png", false));
        project.files.add(new ProjectFile("android/src/AndroidLauncher", "android/src/" + packageDir + "/AndroidLauncher.java", true));
        project.files.add(new ProjectFile("android/AndroidManifest.xml"));
        project.files.add(new ProjectFile("android/build.gradle", true));
        project.files.add(new ProjectFile("android/ic_launcher-web.png", false));
        project.files.add(new ProjectFile("android/proguard-project.txt", false));
        project.files.add(new ProjectFile("android/project.properties", false));
        project.files.add(new ProjectFile("local.properties", true));
    }
    // html project
    if (builder.modules.contains(ProjectType.HTML)) {
        project.files.add(new ProjectFile("html/build.gradle"));
        project.files.add(new ProjectFile("html/src/HtmlLauncher", "html/src/" + packageDir + "/client/HtmlLauncher.java", true));
        project.files.add(new ProjectFile("html/GdxDefinition", "html/src/" + packageDir + "/GdxDefinition.gwt.xml", true));
        project.files.add(new ProjectFile("html/GdxDefinitionSuperdev", "html/src/" + packageDir + "/GdxDefinitionSuperdev.gwt.xml", true));
        project.files.add(new ProjectFile("html/war/index", "html/webapp/index.html", true));
        project.files.add(new ProjectFile("html/war/styles.css", "html/webapp/styles.css", false));
        project.files.add(new ProjectFile("html/war/refresh.png", "html/webapp/refresh.png", false));
        project.files.add(new ProjectFile("html/war/soundmanager2-jsmin.js", "html/webapp/soundmanager2-jsmin.js", false));
        project.files.add(new ProjectFile("html/war/soundmanager2-setup.js", "html/webapp/soundmanager2-setup.js", false));
        project.files.add(new ProjectFile("html/war/WEB-INF/web.xml", "html/webapp/WEB-INF/web.xml", true));
    }
    // ios robovm
    if (builder.modules.contains(ProjectType.IOS)) {
        project.files.add(new ProjectFile("ios/src/IOSLauncher", "ios/src/" + packageDir + "/IOSLauncher.java", true));
        project.files.add(new ProjectFile("ios/data/Default.png", false));
        project.files.add(new ProjectFile("ios/data/Default@2x.png", false));
        project.files.add(new ProjectFile("ios/data/Default@2x~ipad.png", false));
        project.files.add(new ProjectFile("ios/data/Default-568h@2x.png", false));
        project.files.add(new ProjectFile("ios/data/Default~ipad.png", false));
        project.files.add(new ProjectFile("ios/data/Default-375w-667h@2x.png", false));
        project.files.add(new ProjectFile("ios/data/Default-414w-736h@3x.png", false));
        project.files.add(new ProjectFile("ios/data/Icon.png", false));
        project.files.add(new ProjectFile("ios/data/Icon@2x.png", false));
        project.files.add(new ProjectFile("ios/data/Icon-72.png", false));
        project.files.add(new ProjectFile("ios/data/Icon-72@2x.png", false));
        project.files.add(new ProjectFile("ios/build.gradle", true));
        project.files.add(new ProjectFile("ios/Info.plist.xml", false));
        project.files.add(new ProjectFile("ios/robovm.properties"));
        project.files.add(new ProjectFile("ios/robovm.xml", true));
    }
    Map<String, String> values = new HashMap<String, String>();
    values.put("%APP_NAME%", appName);
    values.put("%APP_NAME_ESCAPED%", appName.replace("'", "\\'"));
    values.put("%PACKAGE%", packageName);
    values.put("%PACKAGE_DIR%", packageDir);
    values.put("%MAIN_CLASS%", mainClass);
    values.put("%ANDROID_SDK%", sdkPath);
    values.put("%ASSET_PATH%", assetPath);
    values.put("%BUILD_TOOLS_VERSION%", DependencyBank.buildToolsVersion);
    values.put("%API_LEVEL%", DependencyBank.androidAPILevel);
    values.put("%GWT_VERSION%", DependencyBank.gwtVersion);
    if (builder.modules.contains(ProjectType.HTML)) {
        values.put("%GWT_INHERITS%", parseGwtInherits(builder));
    }
    copyAndReplace(outputDir, project, values);
    builder.cleanUp();
    // HACK executable flag isn't preserved for whatever reason...
    new File(outputDir, "gradlew").setExecutable(true);
    Executor.execute(new File(outputDir), "gradlew.bat", "gradlew", "clean" + parseGradleArgs(builder.modules, gradleArgs), callback);
}
