/**
 * Creates a master build script and one build script for each target to generated native shared libraries.
 * @param config the {@link BuildConfig}
 * @param targets list of {@link BuildTarget} instances
 */
public void generate(BuildConfig config, BuildTarget... targets) {
    // create all the directories for outputing object files, shared libs and natives jar as well as build scripts.
    if (!config.libsDir.exists()) {
        if (!config.libsDir.mkdirs())
            throw new RuntimeException("Couldn't create directory for shared library files in '" + config.libsDir + "'");
    }
    if (!config.jniDir.exists()) {
        if (!config.jniDir.mkdirs())
            throw new RuntimeException("Couldn't create native code directory '" + config.jniDir + "'");
    }
    // copy jni headers
    copyJniHeaders(config.jniDir.path());
    // copy memcpy_wrap.c, needed if your build platform uses the latest glibc, e.g. Ubuntu 12.10
    if (config.jniDir.child("memcpy_wrap.c").exists() == false) {
        new FileDescriptor("com/badlogic/gdx/jnigen/resources/scripts/memcpy_wrap.c", FileType.Classpath).copyTo(config.jniDir.child("memcpy_wrap.c"));
    }
    ArrayList<String> buildFiles = new ArrayList<String>();
    ArrayList<String> libsDirs = new ArrayList<String>();
    ArrayList<String> sharedLibFiles = new ArrayList<String>();
    // generate an Ant build script for each target
    for (BuildTarget target : targets) {
        String buildFile = generateBuildTargetTemplate(config, target);
        FileDescriptor libsDir = new FileDescriptor(getLibsDirectory(config, target));
        if (!libsDir.exists()) {
            if (!libsDir.mkdirs())
                throw new RuntimeException("Couldn't create libs directory '" + libsDir + "'");
        }
        String buildFileName = "build-" + target.os.toString().toLowerCase() + (target.is64Bit ? "64" : "32") + ".xml";
        if (target.buildFileName != null)
            buildFileName = target.buildFileName;
        config.jniDir.child(buildFileName).writeString(buildFile, false);
        System.out.println("Wrote target '" + target.os + (target.is64Bit ? "64" : "") + "' build script '" + config.jniDir.child(buildFileName) + "'");
        if (!target.excludeFromMasterBuildFile) {
            if (target.os != TargetOs.MacOsX && target.os != TargetOs.IOS) {
                buildFiles.add(buildFileName);
            }
            String sharedLibFilename = target.libName;
            if (sharedLibFilename == null)
                sharedLibFilename = getSharedLibFilename(target.os, target.is64Bit, config.sharedLibName);
            sharedLibFiles.add(sharedLibFilename);
            if (target.os != TargetOs.Android && target.os != TargetOs.IOS) {
                libsDirs.add("../" + libsDir.path().replace('\\', '/'));
            }
        }
    }
    // generate the master build script
    String template = new FileDescriptor("com/badlogic/gdx/jnigen/resources/scripts/build.xml.template", FileType.Classpath).readString();
    StringBuffer clean = new StringBuffer();
    StringBuffer compile = new StringBuffer();
    StringBuffer pack = new StringBuffer();
    for (int i = 0; i < buildFiles.size(); i++) {
        clean.append("\t\t<ant antfile=\"" + buildFiles.get(i) + "\" target=\"clean\"/>\n");
        compile.append("\t\t<ant antfile=\"" + buildFiles.get(i) + "\"/>\n");
    }
    for (int i = 0; i < libsDirs.size(); i++) {
        pack.append("\t\t\t<fileset dir=\"" + libsDirs.get(i) + "\" includes=\"" + sharedLibFiles.get(i) + "\"/>\n");
    }
    if (config.sharedLibs != null) {
        for (String sharedLib : config.sharedLibs) {
            pack.append("\t\t\t<fileset dir=\"" + sharedLib + "\"/>\n");
        }
    }
    template = template.replace("%projectName%", config.sharedLibName + "-natives");
    template = template.replace("<clean/>", clean.toString());
    template = template.replace("<compile/>", compile.toString());
    template = template.replace("%packFile%", "../" + config.libsDir.path().replace('\\', '/') + "/" + config.sharedLibName + "-natives.jar");
    template = template.replace("<pack/>", pack);
    config.jniDir.child("build.xml").writeString(template, false);
    System.out.println("Wrote master build script '" + config.jniDir.child("build.xml") + "'");
}
