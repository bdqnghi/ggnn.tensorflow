private String generateBuildTargetTemplate(BuildConfig config, BuildTarget target) {
    // special case for android
    if (target.os == TargetOs.Android) {
        new AndroidNdkScriptGenerator().generate(config, target);
        String template = new FileDescriptor("com/badlogic/gdx/jnigen/resources/scripts/build-android.xml.template", FileType.Classpath).readString();
        template = template.replace("%precompile%", target.preCompileTask == null ? "" : target.preCompileTask);
        template = template.replace("%postcompile%", target.postCompileTask == null ? "" : target.postCompileTask);
        return template;
    }
    // read template file from resources
    String template = null;
    if (target.os == TargetOs.IOS) {
        template = new FileDescriptor("com/badlogic/gdx/jnigen/resources/scripts/build-ios.xml.template", FileType.Classpath).readString();
    } else {
        template = new FileDescriptor("com/badlogic/gdx/jnigen/resources/scripts/build-target.xml.template", FileType.Classpath).readString();
    }
    // generate shared lib filename and jni platform headers directory name
    String libName = target.libName;
    if (libName == null)
        libName = getSharedLibFilename(target.os, target.is64Bit, config.sharedLibName);
    String jniPlatform = getJniPlatform(target.os);
    // generate include and exclude fileset Ant description for C/C++
    // append memcpy_wrap.c to list of files to be build
    StringBuffer cIncludes = new StringBuffer();
    cIncludes.append("\t\t<include name=\"memcpy_wrap.c\"/>\n");
    for (String cInclude : target.cIncludes) {
        cIncludes.append("\t\t<include name=\"" + cInclude + "\"/>\n");
    }
    StringBuffer cppIncludes = new StringBuffer();
    for (String cppInclude : target.cppIncludes) {
        cppIncludes.append("\t\t<include name=\"" + cppInclude + "\"/>\n");
    }
    StringBuffer cExcludes = new StringBuffer();
    for (String cExclude : target.cExcludes) {
        cExcludes.append("\t\t<exclude name=\"" + cExclude + "\"/>\n");
    }
    StringBuffer cppExcludes = new StringBuffer();
    for (String cppExclude : target.cppExcludes) {
        cppExcludes.append("\t\t<exclude name=\"" + cppExclude + "\"/>\n");
    }
    // generate C/C++ header directories
    StringBuffer headerDirs = new StringBuffer();
    for (String headerDir : target.headerDirs) {
        headerDirs.append("\t\t\t<arg value=\"-I" + headerDir + "\"/>\n");
    }
    String targetFolder = target.osFileName;
    if (targetFolder == null)
        targetFolder = target.os.toString().toLowerCase() + (target.is64Bit ? "64" : "32");
    // replace template vars with proper values
    template = template.replace("%projectName%", config.sharedLibName + "-" + target.os + "-" + (target.is64Bit ? "64" : "32"));
    template = template.replace("%buildDir%", config.buildDir.child(targetFolder).path().replace('\\', '/'));
    template = template.replace("%libsDir%", "../" + getLibsDirectory(config, target));
    template = template.replace("%libName%", libName);
    template = template.replace("%jniPlatform%", jniPlatform);
    template = template.replace("%compilerPrefix%", target.compilerPrefix);
    template = template.replace("%cFlags%", target.cFlags);
    template = template.replace("%cppFlags%", target.cppFlags);
    template = template.replace("%linkerFlags%", target.linkerFlags);
    template = template.replace("%libraries%", target.libraries);
    template = template.replace("%cIncludes%", cIncludes);
    template = template.replace("%cExcludes%", cExcludes);
    template = template.replace("%cppIncludes%", cppIncludes);
    template = template.replace("%cppExcludes%", cppExcludes);
    template = template.replace("%headerDirs%", headerDirs);
    template = template.replace("%precompile%", target.preCompileTask == null ? "" : target.preCompileTask);
    template = template.replace("%postcompile%", target.postCompileTask == null ? "" : target.postCompileTask);
    return template;
}
